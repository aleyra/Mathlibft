# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucille <lucille@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 13:39:23 by lucille           #+#    #+#              #
#    Updated: 2021/03/04 10:03:56 by lucille          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re bonus

# Name of file
NAME		=	libft.a

# Name directory
PATH_INC	=	includes
PATH_OBJ	=	objs
PATH_LOG	=	logs
PATH_SRCS	=	srcs

# List of sources
SRCS_DISP	=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c 
SRCS_STR	=	ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c strjoin_free.c ft_strcmp.c ft_charstr.c ft_strcpy.c
SRCS_CHAR	=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c
SRCS_MEM	=	ft_bzero.c ft_calloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c 
SRCS_TYPE	=	ft_atoi.c ft_itoa.c ft_ulltoa.c
SRCS_BASE	=	decimal_to_hexa.c 
SRCS_LIST	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
SRCS_FILE	=	get_next_line.c split_fd_to_tabline.c
SRCS		=	$(addprefix $(PATH_SRCS)/display/, $(SRCS_DISP)) \
				$(addprefix $(PATH_SRCS)/string/, $(SRCS_STR)) \
				$(addprefix $(PATH_SRCS)/character/, $(SRCS_CHAR)) \
				$(addprefix $(PATH_SRCS)/memory/, $(SRCS_MEM)) \
				$(addprefix $(PATH_SRCS)/type_changing/, $(SRCS_TYPE)) \
				$(addprefix $(PATH_SRCS)/base_changing/, $(SRCS_BASE)) \
				$(addprefix $(PATH_SRCS)/list/, $(SRCS_LIST)) \
				$(addprefix $(PATH_SRCS)/file/, $(SRCS_FILE))
OBJS		=	$(addprefix $(PATH_OBJ)/, $(notdir $(SRCS:.c=.o)))
INCS		=	$(addprefix $(PATH_INC)/, libft.h)

# Commands of compilation
COMP		=	clang
COMP_FLAG	=	-Wall -Werror -Wextra
COMP_ADD	=	-I$(PATH_INC)

# Others Command
RM			=	/bin/rm

# Color Code and template code
_YELLOW		=	\033[38;5;184m
_GREEN		=	\033[38;5;46m
_RESET		=	\033[0m
_INFO		=	[$(_YELLOW)INFO$(_RESET)]
_SUCCESS	=	[$(_GREEN)SUCCESS$(_RESET)]

# Functions
all:	init $(NAME)
	@ echo "$(_SUCCESS) Compilation done"

init:
	@ $(shell mkdir -p $(PATH_OBJ))

$(NAME): $(OBJS) $(INCS)
	@ ar rcs $(NAME) $(OBJS)

$(PATH_OBJ)/%.o : $(PATH_SRCS)/*/%.c  $(INCS)
	@ $(COMP) $(COMP_FLAG) $(COMP_ADD) -c $< -o $@
	@ echo "$(_INFO) Compilation of $*"

# $(PATH_OBJ)/%.o : $(PATH_SRCS)/%.c  $(INCS)
# 	@ $(COMP) $(COMP_FLAG) $(COMP_ADD) -c $< -o $@
# 	@ echo "$(_INFO) Compilation of $*"

clean:
	@ $(RM) -rf $(PATH_OBJ)
	@ echo "$(_INFO) Deleted files and directory"

fclean: clean
	@ $(RM) -rf $(NAME)

re: 	fclean all


