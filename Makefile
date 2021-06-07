# **************************************************************************** #

.PHONY: all clean fclean re bonus

# Name of file
NAME		=	mathlibft.a

# Name directory
PATH_INC	=	includes
PATH_OBJ	=	objs
PATH_LOG	=	logs
PATH_SRCS	=	srcs

# List of sources
SRCS_CPLX	=	cplx.c some_calc_cplx.c some_calc_cplx2.c \
SRCS_NO_GEO	=	conversions.c \
SRCS_VEC3D	=	init_t_vec3.c rotation3d.c some_calc3d.c some_calc3d_other.c \
				triangle3d.c 
SRCS		=	$(addprefix $(PATH_SRCS)/file/, $(SRCS_CPLX)) \
				$(addprefix $(PATH_SRCS)/file/, $(SRCS_NO_GEO)) \
				$(addprefix $(PATH_SRCS)/file/, $(SRCS_VEC3D))
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


