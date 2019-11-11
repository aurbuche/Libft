# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: aurbuche <aurbuche@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/15 10:26:14 by aurbuche     #+#   ##    ##    #+#        #
#    Updated: 2019/10/25 16:03:37 by aurbuche    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #
 
SRC =  ft_isprint.c ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strlcpy.c ft_tolower.c ft_bzero.c ft_memccpy.c ft_putnbr_fd.c ft_strlen.c ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c
OBJ = ${SRC:.c=.o}
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
HEADER = libft.h

$(NAME) : $(OBJ)
				@echo "\033[0m"
				ar rcs ${NAME} ${OBJ}
				@echo "\033[0m"
				@echo "\033[38;2;0;128;0mCompiling libft.a...\tDONE"

all :                   ${NAME}

%.o: %.c $(HEADER)
				@${CC} ${CFLAGS} -c $< -o $@
				@echo "\033[38;2;250;240;197mCompiling objects file...$<"
				@echo "\033[38;2;0;128;0mDone"
clean :
				@${RM} -f *.o
				@echo "\033[38;2;165;38;10mDeleting objects file...\t\033[38;2;0;128;0mDONE"
fclean :		clean
				@rm -f ${NAME}
				@echo "\033[38;2;165;38;10mDeleting libft.a...\t\033[38;2;0;128;0mDONE"
				
re :			fclean all
.PHONY :		all clean fclean re