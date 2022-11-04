# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dreijans <dreijans@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/04 16:56:00 by dreijans      #+#    #+#                  #
#    Updated: 2022/11/04 17:32:53 by dreijans      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
SRC = \
ft_isalnum.c \
ft_isalpha.c \
ft_isdigit.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c \
ft_memset.c \
ft_bzero.c \
ft_strlcpy.c \
ft_toupper.c \
ft_tolower.c \
ft_strchr.c \
ft_strrchr.c \
ft_strncmp.c \
ft_atoi.c \
ft_strnstr.c \
ft_strlcat.c \
ft_memcpy.c \
ft_memmove.c \
ft_memchr.c \
ft_memcmp.c \
ft_calloc.c \
ft_strdup.c \
ft_substr.c \
ft_strjoin.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_strtrim.c \
ft_striteri.c \
ft_strmapi.c \
ft_itoa.c \
ft_putnbr_fd.c \
ft_split.c 
BSRC = ft_lstnew_bonus.c
REG_OBJ_FILES = $(SRC:.c=.o)
BONUS_OBJ_FILES = $(BSRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror

ifdef WITH_BONUS
OBJ_FILES = $(REG_OBJ_FILES) $(BONUS_OBJ_FILES)
else
OBJ_FILES = $(REG_OBJ_FILES)
endif

.PHONY: all clean fclean re test bonus

all: $(NAME)
#later $(CC) $(CFLAGS) $(SRC) verwijderen want we hbeben geen executable nodig voor de opdracht 
#stuur geen main.c en test recept verwijderen
$(NAME): $(OBJ_FILES)
#		$(CC) $(CFLAGS) $(SRC) main.c
		ar -src $(NAME) $(OBJ_FILES)

%.o: %.c
		@$(CC) -c $(CFLAGS) -o $@ $^

clean:
		rm -f $(REG_OBJ_FILES)
		rm -f $(BONUS_OBJ_FILES)

fclean: clean # VERGEET NIET A.OUT TE VERWIJDEREN VOORDAT JE PUSHT
		rm -f $(NAME) ./a.out 

re: fclean all

bonus:
		$(MAKE) WITH_BONUS=1 all
		ar -src $(NAME) $(BONUS_OBJ_FILES)

test: re # als je (SRC) zou doen kan het zijn dat niet alles up to dat is
		gcc main.c $(OBJ_FILES) $(CFLAGS)
		./a.out
