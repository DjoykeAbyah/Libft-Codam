# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dreijans <dreijans@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/04 16:56:00 by dreijans      #+#    #+#                  #
#    Updated: 2022/10/17 15:39:47 by dreijans      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
SRC = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_strlcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c ft_strnstr.c ft_strlcat.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re 

all: $(NAME)
#later $(CC) $(CFLAGS) $(SRC) verwijderen want we hbeben geen executable nodig voor de opdracht 
#stuur geen main.c en test recept verwijderen
$(NAME): $(OBJ)
#		$(CC) $(CFLAGS) $(SRC) main.c
		ar -src $(NAME) $(OBJ)

%.o: %.c
		$(CC) -c $(CFLAGS) -o $@ $^

clean:
		rm -f *.o

fclean: clean # VERGEET NIET A.OUT TE VERWIJDEREN VOORDAT JE PUSHT
		rm -f $(NAME) ./a.out 

re: fclean all

test: all # als je (SRC) zou doen kan het zijn dat niet alles up to dat is
		gcc main.c $(OBJ) $(CFLAGS)
		./a.out
