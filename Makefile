# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thine <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/17 16:08:51 by thine             #+#    #+#              #
#    Updated: 2025/01/29 12:33:27 by thine            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/

SRC = ft_check.c \
	ft_error.c \
	ft_list_utils.c \
	ft_op_push.c \
	ft_op_reverse_rotate.c \
	ft_op_rotate.c \
	ft_op_swap.c \
	ft_push_a.c \
	ft_push_b.c \
	ft_search_index.c \
	ft_select_operation.c \
	ft_solver_utils_pa.c \
	ft_solver_utils_pb.c \
	ft_sort.c \
	ft_stack_utils.c \
	push_swap.c \

OBJ = ${SRC:.c=.o}

INCLUDE = -L ./libft -lft

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	make -C ${LIBFTDIR}
	${CC} ${FLAGS} ${OBJ} -o ${NAME} ${INCLUDE}
all: ${NAME}

clean:
	${RM} ${OBJ}
	${MAKE} -C ${LIBFTDIR} clean
	#@cd ${LIBFTDIR} && ${MAKE} clean

fclean: clean
	${RM} ${NAME}
	@cd ${LIBFTDIR} && ${MAKE} fclean

re: clean all

.PHONY: all clean fclean re
