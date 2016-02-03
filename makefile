CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = includes/
NAME = fillit
SRCS = sources/
FILES = alphacheck.c \
alphaconvert.c \
charcheck.c \
charcountfile.c \
charcountmap.c \
entrycheck.c \
erase_last.c \
fill.c \
ft_putchar.c \
ft_putstr.c \
isalpha.c \
istetricheck.c \
main.c \
map.c \
mapcheck.c \
mapfill.c \
minsquare.c \
redraw.c \
squarefind.c \
tabcount.c \
tabsize.c \
tetricheck.c \
tetriconvert.c \
tetricount.c \
tetritab.c
OBJ = $(subst .c,.o, $(FILES))

all: $(NAME)

$(NAME):
		cd $(SRCS); $(CC) -o ../$(NAME) $(CCFLAGS) -I ../$(INCLUDES) $(FILES)

clean:
		rm -f $(OBJ)

fclean:clean
		rm -f $(NAME)

re:fclean all