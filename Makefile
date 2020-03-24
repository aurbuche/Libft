# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aurelienbucher <aurelienbucher@student.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/10 15:28:27 by aurbuche          #+#    #+#              #
#    Updated: 2020/03/24 11:26:58 by aurelienbuc      ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS_ALLOC		=	$(addprefix alloc/, ft_calloc.c ft_strdup.c ft_strndup.c\
					ft_substr.c)

SRCS_CHAR		=	$(addprefix char/, ft_isalnum.c ft_isalpha.c ft_isascii.c\
					ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c)

SRCS_CONVERT	=	$(addprefix convert/, ft_atoi.c ft_itoa.c ft_itoa_base.c\
					ft_itoa_p_base.c)

SRCS_DISPLAY	=	$(addprefix display/, ft_putchar.c ft_putchar_fd.c\
					ft_putendl_fd.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c)

SRCS_FREE		=	$(addprefix free/, ft_delete.c)

SRCS_MEM		=	$(addprefix mem/, ft_bzero.c ft_memccpy.c ft_memchr.c\
					ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c)

SRCS_STR		=	$(addprefix str/, ft_split.c ft_strchr.c ft_strcpy.c\
					ft_strfjoin.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c\
					ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnlen.c\
					ft_strnstr.c ft_strrchr.c ft_strtrim.c\
					ft_strcmp.c)

SRCS_READ		=	$(addprefix read/, ft_get_next_line.c)

SRCS_PRINTF		=	$(addprefix ft_printf/, ft_printf.c ft_change.c ft_insert.c\
					ft_is.c ft_switch.c ft_4_digit.c ft_display.c ft_set_flag.c\
					ft_set_precision.c ft_4_alpha.c ft_set_field.c ft_ctos.c\
					ft_write_til.c ft_4_x.c ft_4_alpha.c ft_4_p.c ft_4_c.c\
					ft_set_preci_field.c ft_all_to_zero.c ft_find_converter.c\
					ft_init_struct.c ft_insert_stars.c ft_check_error.c ft_free_struct.c)
						
OBJ_NAME		=		$(SRCS_ALLOC:.c=.o), $(SRCS_CHAR:.c=.o), $(SRCS_CONVERT:.c=.o), $(SRCS_DISPLAY:.c=.o), 
						$(SRCS_FREE:.c=.o), $(SRCS_MEM:.c=.o), $(SRCS_STR:.c=.o), $(SRCS_READ:.c=.o), $(SRCS_PRINTF:.c=.o), 

OBJ				=		$(addprefix $(OBJ_PATH), $(OBJ_NAME))

OBJ_PATH		=		obj/

NAME			=		libft.a

CC				=		cc

CFLAGS			=		-Wall -Wextra -Werror -g3

RM				=		rm -rf

HEADER			=		includes/

all :	$(OBJ_PATH) ${NAME}

$(NAME) : $(OBJ) $(HEADER)
				@echo "\033[0m"
				@ar rcs $(NAME) $(OBJ)
				@echo "\033[0m"
				@echo "\033[38;2;0;128;0mCompiling libft.a...\tDONE"

$(OBJ_PATH)%.o:	$(SRCS_PATH)%.c $(HEADER) Makefile
				@${CC} ${CFLAGS} -c $< -o $@
				@echo "\033[38;2;250;240;197mCompiling objects file...libft/$<"
				@echo "\033[38;2;0;128;0mDone"

$(OBJ_PATH):
				@mkdir -p obj/ 2> /dev/null

clean :
				@${RM} -f *.o
				@echo "\033[38;2;165;38;10mDeleting objects file...\t\033[38;2;0;128;0mDONE"
fclean :		clean
				@rm -f ${NAME}
				@echo "\033[38;2;165;38;10mDeleting libft.a...\t\033[38;2;0;128;0mDONE"
				
re :			fclean all
.PHONY :		all clean fclean re