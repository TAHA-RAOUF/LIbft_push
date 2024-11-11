SOURCES := ft_isdigit.c  ft_memcpy.c  ft_split.c  ft_strlen.c  ft_tolower.c  ft_atoi.c  ft_isprint.c  ft_memmove.c  ft_strchr.c  ft_strmapi.c  ft_toupper.c  ft_bzero.c  ft_itoa.c  ft_memset.c  ft_strdup.c  ft_strncmp.c  ft_calloc.c  ft_putchar_fd.c  ft_striteri.c  ft_strnstr.c  ft_isalnum.c  ft_putendl_fd.c  ft_strjoin.c  ft_strrchr.c  ft_isalpha.c  ft_memchr.c  ft_putnbr_fd.c  ft_strlcat.c  ft_strtrim.c  ft_isascii.c  ft_memcmp.c  ft_putstr_fd.c  ft_strlcpy.c  ft_substr.c 

OBJECTS := ${SOURCES:.c=.o}

NAME := libft.a

BONUS := ft_lstnew_bonus.c  ft_lstadd_front_bonus.c  ft_lstadd_back_bonus.c  ft_lstsize_bonus.c  ft_lstlast_bonus.c  ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstmap_bonus.c ft_lstiter_bonus.c

BONUSOBJECTS := ${BONUS:.c=.o}

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs libft.a $(OBJECTS)

# //build the makefile
%.o: %.c
	cc -Wall -Wextra -Werror -o $@ -c $<

clean:
	rm -rf $(OBJECTS) $(BONUSOBJECTS)

fclean: clean
	rm -rf libft.a

#Rebuilding
re: fclean all

bonus: .bonus_ar

# Bonus Target
.bonus_ar: $(BONUSOBJECTS)
	ar rcs $(NAME) 	$(BONUSOBJECTS)
	touch .bonus_ar