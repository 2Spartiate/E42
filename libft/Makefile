# Nom de la bibliothèque
NAME = libft.a

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror

# Liste des fichiers sources
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
       ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
       ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Liste des fichiers sources pour les bonus
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
             ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
             ft_lstmap.c

# Objets correspondants
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Commande pour créer la bibliothèque
AR = ar rcs

# Règle pour compiler la bibliothèque de base
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Règle "all" pour créer la bibliothèque de base
all: $(NAME)

# Règle "bonus" pour ajouter les fonctions bonus
bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

# Règles de nettoyage
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# Indique que ces règles ne représentent pas de fichiers
.PHONY: all clean fclean re bonus
