#	Sources
SRCS		=	$(shell find . -name "*.c" -and ! -name "*_bonus.c")
SRCS_BONUS	=	$(shell find . -name "*_bonus.c")
OBJS		= ${SRCS:.c=.o}
OBJS_BONUS	= ${SRCS_BONUS:.c=.o}
HDRS		= -I
NAME		= libft.a
CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rc ${NAME} ${OBJS}

all:	${NAME}

bonus:		${OBJS_BONUS}
		ar rc ${NAME} ${OBJS_BONUS}

clean:
		${RM} ${OBJS} ${OBJS_BONUS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re