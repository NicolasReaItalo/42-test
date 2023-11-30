#/usr/bin/zsh
echo "TESTS FOR LIBFT"
cd ../libft
make re
echo "\n"--------------functions successfully compiled in libft"--------------\\n"
ar -t libft.a
echo "\n"--------------functions successfully compiled in libft"--------------\\n"
echo "\n\n\n\n"
cd ../tests-nico

if [ $# -eq 0  ]; then
echo "Usage : ./run_tests all to run all the tests\n"
echo "Usage : ./run_tests 1 \n
				test_ft_isalpha();
	 			test_ft_isdigit();
	 			test_ft_isalnum();
	 			test_ft_isascii();
	 			test_ft_isprint();\n\n"
echo "Usage : ./run_tests 2 \n
				test_ft_strlen();
				test_ft_memset();
				test_ft_bzero();
				test_ft_memcpy();
				test_ft_memmove();\n\n"
echo "Usage : ./run_tests 3 \n
				test_ft_strlcpy();
				test_ft_strlcat();\n\n"
echo "Usage : ./run_tests 4 \n
				test_ft_toupper();
				test_ft_tolower();
				test_ft_strchr();
				test_ft_strrchr();
				test_ft_strncmp();
				test_ft_memchr();
				test_ft_memcmp();
				test_ft_strnstr();
				test_ft_atoi();\n\n"
echo "Usage : ./run_tests 5 \n
				test_ft_calloc();
				test_ft_strdup();
				test_ft_substr();
				test_ft_strjoin();
				test_ft_strtrim();
				test_ft_split();
				test_ft_itoa();
				test_ft_strmapi();
				test_ft_striteri();\n\n"
echo "Usage : ./run_tests bonus \n
				test_ft_lstnew();
				test_ft_lstadd_front();
				test_ft_lstsize();
				test_ft_lstlast();
				test_ft_lstadd_back();
				test_ft_lstdelone();
				test_ft_lstclear();
				test_ft_lstiter();
				test_ft_lstmap();\n\n"
	 exit
fi


#TEST 1
if [ "$1" = "1" ]; then
gcc -Wall -Wextra -Werror main_tst1.c srcs/*.c -I ../libft -I includes -L ../libft -lft -lbsd -o test1
./test1
fi

#TEST 2
if [ "$1" = "2" ]; then
gcc -Wall -Wextra -Werror main_tst2.c srcs/*.c -I ../libft -I includes -L ../libft -lft -lbsd -o test2
./test2
fi

#TEST 3
if [ "$1" = "3" ]; then
gcc -Wall -Wextra -Werror main_tst3.c srcs/*.c -I ../libft -I includes -L ../libft -lft -lbsd -o test3
./test3
fi

#TEST 4
if [ "$1" = "4" ]; then
gcc -Wall -Wextra -Werror main_tst4.c srcs/*.c -I ../libft -I includes -L ../libft -lft -lbsd -o test4
./test4
fi

#TEST 5
if [ "$1" = "5" ]; then
gcc -Wall -Wextra -Werror main_tst5.c srcs/*.c -I ../libft -I includes -L ../libft -lft -lbsd -o test5
valgrind --leak-check=full --track-origins=yes ./test5
fi
#TEST 6
if [ "$1" = "6" ]; then
gcc -Wall -Wextra -Werror main_tst6.c srcs/*.c -I ../libft -I includes -L ../libft -lft -lbsd -o test6
./test6 | cat -E
chmod 777 *.txt
diff -s test_putchar_tmp.txt putchar_ref
diff -s test_putstr_tmp.txt putstr_ref
diff -s test_putendl_tmp.txt putendl_ref
diff -s test_putnbr_tmp.txt putnbr_ref
fi

#BONUS PART
if [ "$1" = "bonus" ]; then
    echo "Testing the bonus part"
	cd ../libft
	make bonus
	echo "\n"--------------functions successfully compiled in libft"--------------\\n"
	ar -t libft.a
	echo "\n"--------------functions successfully compiled in libft"--------------\\n"
	echo "\n\n\n\n"
	cd ../tests
	cc  -Wall -Wextra -Werror main_bonus.c srcs/*.c bonus_srcs/*.c -I ../libft -I includes_bonus -L ../libft -lft -lbsd -o bonus
	valgrind --leak-check=full --track-origins=yes ./bonus
fi

if [ "$1" = "all" ]; then
	./run_tests.sh 1
	./run_tests.sh 2
	./run_tests.sh 3
	./run_tests.sh 4
	./run_tests.sh 5
	./run_tests.sh 6
fi

echo "\n\nCleaning tests files\n\n"

rm -f test1
rm -f test2
rm -f test3
rm -f test4
rm -f test5
rm -f test6
rm -f bonus
rm -f test_putchar_tmp.txt
rm -f test_putstr_tmp.txt
rm -f test_putendl_tmp.txt
rm -f test_putnbr_tmp.txt

cd ../libft
make clean
