NAME = push_swap

GCC = gcc
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address --g3
INCLUDES = -Iinc
RM = rm -rf

SRC_PATH = src
OBJ_PATH = obj
LIB_PATH = libft
ANNOYING = .vscode

MAIN = main.c
SRC = push.c r_rotate.c rotate.c swap.c sort_array.c create_array.c \
	  check_number.c check_mulnumber.c sortfor3.c sortfor5.c sort_utils_a.c \
	  sort_utils_b.c opt_insertion_sort.c push_to_a.c convert_numbers.c \
	  sort_utils_c.c
OBJ = ${addprefix ${OBJ_PATH}/, ${SRC:.c=.o}}

LIBFT = ${LIB_PATH}/libft.a
LIBFT_DIR = -L${LIB_PATH} -lft

all: ${NAME}

${NAME}: ${OBJ} ${LIBFT}
	@${GCC} ${CFLAGS} ${INCLUDES} -o ${NAME} ${MAIN} ${OBJ} ${LIBFT_DIR}

${LIBFT}:
	@make re -C ${LIB_PATH}

${OBJ_PATH}/%.o: ${SRC_PATH}/%.c
	@mkdir -p ${@D}
	@${GCC} ${CFLAGS} ${INCLUDES} -c $< -o $@

clean:
	@${RM} ${ANNOYING}
	@${RM} ${OBJ_PATH}
	@make clean -C ${LIB_PATH}

fclean: clean
	@${RM} ${NAME}
	@make fclean -C ${LIB_PATH}

re: fclean all

.PHONY = all clean fclean re