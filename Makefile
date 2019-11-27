##
## EPITECH PROJECT, 2018
## aze
## File description:
## aeaze
##

NAME	= my_rpg

CC	= gcc

RM	= rm -f

SRCS	= 	./game.c 	\
		./windows.c 	\
		./windows_two.c \
		./event.c	\
		./event_two.c	\
		./text.c	\
		./text_two.c	\
		./player.c	\
		./player_two.c	\
		./map.c		\
		settings.c	\
		settings_two.c	\
		settings_tree.c	\
		hitvox.c	\
		game_over.c	\
		combat.c	\
		combat_two.c	\
		init_hp.c	\
		npc.c		\
		event_tree.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./
CFLAGS += -W -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(SRCS) -o $(NAME) $(LDFLAGS) -lc_graph_prog

clean:
	$(RM) *#
	$(RM) *~

fclean: clean
	$(RM) $(NAME)

debian:	fclean
	$(CC) $(SRCS) -o $(NAME) $(LDFLAGS) -lcsfml-graphics -lcsfml-audio -lcsfml-window -lcsfml-system

re : fclean all

.PHONY: all clean fclean re
