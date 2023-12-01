#########################################################
### VARIABLES
#########################################################
BUF_SIZE 	= 	10
NAME		=	test_pgm
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -ggdb -g3 -D BUFFER_SIZE=${BUF_SIZE}
#########################################################
### SOURCES
#########################################################
OBJS	=		${SRCS:.c=.o}
SRCS	=		test_main.c\
				../get_next_line.c\
				../get_next_line_utils.c

OBJS_BONUS	=	${SRCS_BONUS:.c=.o}
SRCS_BONUS  = 	test_main_bonus.c\
				../get_next_line_bonus.c\
				../get_next_line_utils_bonus.c

#########################################################
### REGLES
#########################################################
.PHONY:		all clean fclean re

all:		${NAME}

.o:.c
			${CC} ${CFLAGS} -D BUFFER_SIZE=${BUF_SIZE}  -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -D BUFFER_SIZE=${BUF_SIZE} ${OBJS} -o ${NAME}

bonus:		${OBJS_BONUS}
			${CC} ${CFLAGS} -D BUFFER_SIZE=${BUF_SIZE} ${OBJS_BONUS} -o ${NAME}

clean:
			rm -f ${OBJS}
			rm -f ${OBJS_BONUS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

tests:		${NAME}
			echo "Hello"
