cd ..
make re
cd test
if [ "$1" = "-noflags" ]; then
cc  test_main.c -I .. -L .. -lftprintf -o test
else
cc -Wall -Wextra -Werror test_main.c -I .. -L .. -lftprintf -o test
fi
echo "\n\n*********[Debut des tests]*********\n\n"
./test | cat -E
rm test

