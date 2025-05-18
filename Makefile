##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile main.c and u.t
##

SRCTEST		=		test/test_project.c

SRC		=		src/my_hunter.c	\
				src/my_events.c	\
				src/my_sprites.c	\
				src/main.c	\
				src/my_endgame.c	\
				src/my_setup.c	\
				src/my_char_setup.c	\
				src/my_scores.c	\
				src/my_pos_scale_text.c	\
				src/display_zat.c	\
				src/my_menu.c	\
				src/my_pause_menu.c

TEST		=		unit_tests

NAME		=		my_hunter

OBJ		=		$(SRC:.c=.o)

LDFLAGS		=		-Llib/my -lmy
CFLAGS		=		-Wall -Wextra
TFLAGS		=		--coverage -lcriterion
GFLAG		=		-l csfml-graphics
WFLAG		=		-l csfml-window
SFLAG		=		-l csfml-system
AFLAGS		=		-l csfml-audio

all:    $(NAME)

$(NAME):		$(OBJ)
		make re -sC lib/my/
		gcc $(CFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS) $(GFLAG) $(AFLAGS) $(SFLAG) $(WFLAG)

tests_run:
		gcc $(CFLAGS) $(SRCTEST) $(SRC) -o $(TEST) $(LDFLAGS) $(TFLAGS)
		./unit_tests
clean:
		rm -f src/*.o
		rm -f *.o
		make clean -sC lib/my/

fclean: clean
		make fclean -sC lib/my/
		rm -f *.gcno
		rm -f *.gcda
		rm -f $(TEST)
		rm -f $(NAME)
re: fclean all
