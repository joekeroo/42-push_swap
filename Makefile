MANDATORY = push_swap
BONUS = checker

GCC = gcc
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address --g3
INCLUDES = -Iinc
RM = rm -rf

M_SRC_PATH = mandatory
B_SRC_PATH = bonus
OBJ_PATH = obj
LIB_PATH = libft
ANNOYING = .vscode

M_MAIN = push_swap.c
M_SRC = push.c r_rotate.c rotate.c swap.c sort_array.c create_array.c \
	  check_number.c check_mulnumber.c sortfor3.c sortfor5.c sort_utils_a.c \
	  sort_utils_b.c opt_insertion_sort.c push_to_a.c convert_numbers.c \
	  sort_utils_c.c
M_OBJ = ${addprefix ${OBJ_PATH}/, ${M_SRC:.c=.o}}

B_MAIN = checker.c
B_SRC = input_sort_steps.c get_next_line.c \
	  push.c r_rotate.c rotate.c swap.c sort_array.c create_array.c \
	  check_number.c check_mulnumber.c sortfor3.c sortfor5.c sort_utils_a.c \
	  sort_utils_b.c opt_insertion_sort.c push_to_a.c convert_numbers.c \
	  sort_utils_c.c
B_OBJ = ${addprefix ${OBJ_PATH}/, ${B_SRC:.c=.o}}

LIBFT = ${LIB_PATH}/libft.a
LIBFT_DIR = -L${LIB_PATH} -lft

all: ${MANDATORY}
bonus: ${BONUS}

${MANDATORY}: ${M_OBJ} ${LIBFT}
	@${GCC} ${CFLAGS} ${INCLUDES} -o ${MANDATORY} ${M_MAIN} ${M_OBJ} ${LIBFT_DIR}

${BONUS}: ${B_OBJ} ${LIBFT}
	@${GCC} ${CFLAGS} ${INCLUDES} -o ${BONUS} ${B_MAIN} ${B_OBJ} ${LIBFT_DIR}

${LIBFT}:
	@make re -C ${LIB_PATH}

${OBJ_PATH}/%.o: ${M_SRC_PATH}/%.c
	@mkdir -p ${@D}
	@${GCC} ${CFLAGS} ${INCLUDES} -c $< -o $@

${OBJ_PATH}/%.o: ${B_SRC_PATH}/%.c
	@mkdir -p ${@D}
	@${GCC} ${CFLAGS} ${INCLUDES} -c $< -o $@

clean:
	@${RM} ${ANNOYING}
	@${RM} ${OBJ_PATH}
	@make clean -C ${LIB_PATH}

fclean: clean
	@${RM} ${MANDATORY}
	@${RM} ${BONUS}
	@make fclean -C ${LIB_PATH}

re: fclean all

.PHONY = all clean fclean re