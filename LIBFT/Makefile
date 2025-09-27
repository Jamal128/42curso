CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror

NAME	:= libft.a
OBJDIR	:= obj

RM		:= rm -f
MKDIR	:= mkdir -p

MY_SOURCES = ft_isdigit.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_strlen.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_strchr.c\
				ft_strncmp.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_strnstr.c\
				ft_atoi.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_strrchr.c

# Objeto en obj/ con el mismo nombre que el .c, ejemplo: ft_strlen.o -> obj/ft_strlen.o
OBJS = $(MY_SOURCES:%.c=$(OBJDIR)/%.o)

$(NAME): $(OBJS)
	@ar crs $(NAME) $(OBJS)

all: $(NAME)

# Crear obj/ si no existe antes de compilar
$(OBJDIR)/%.o: %.c
	@$(MKDIR) $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
