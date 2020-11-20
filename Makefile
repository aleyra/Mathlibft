
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucille <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 13:39:23 by lucille           #+#    #+#              #
#    Updated: 2020/10/29 15:22:38 by lucille          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= //mettre la liste des .c 
OBJS	= ${SRCS:.c=.o}
BNS	= //mettre la liste des .c bonus
OBNS	= ${BNS:.c=.o}

CC		= gcc
RM		= rm -rf
AR		= ar

CFLAGS	= -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I includes

NAME	= libft.a

all:		${NAME}

${NAME}:	${OBJS}
		${AR} rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${OBJS} ${OBNS}
		${AR} rc ${NAME} ${OBJS} ${OBNS}


.PHONY: all clean fclean re bonus
