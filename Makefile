# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lburnet <lburnet@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 13:39:23 by lucille           #+#    #+#              #
#    Updated: 2021/01/15 14:58:42 by lburnet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
			decimal_to_hexa.c ft_ulltoa.c strjoin_free.c ft_strcmp.c ft_charstr.c
OBJS	= ${SRCS:.c=.o}
BNS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBNS	= ${BNS:.c=.o}
LIB	= libft.h

CC		= clang
RM		= rm -rf

CFLAGS	= -Wall -Wextra -Werror -g

%.o: %.c $(LIB)
		$(CC) $(CFLAGS) -c $< -o $@

NAME	= libft.a

all:		$(NAME)

$(NAME):	${OBJS} ${LIB}
		ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS} ${OBNS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${OBJS} ${OBNS} ${LIB}
		ar rc ${NAME} ${OBJS} ${OBNS}

.PHONY: all clean fclean re bonus
