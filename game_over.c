/*
** EPITECH PROJECT, 2018
** gameov
** File description:
** overbitz
*/

#include "game.h"

void	time_cutter_lose(game_t *t)
{
	if (t->seconds2 >= (0.20) && t->seconds2 <= (3)) {
		sfRenderWindow_drawSprite(t->window, t->slose[0], NULL);
	}
	if (t->seconds2 >= (3) && t->seconds2 <= (6)) {
		sfRenderWindow_drawSprite(t->window, t->slose[1], NULL);
	}
	if (t->seconds2 >= (6) && t->seconds2 <= (11)) {
		sfRenderWindow_drawSprite(t->window, t->slose[2], NULL);
	}
	if (t->seconds2 >= (11) && t->seconds2 <= (13)) {
		sfRenderWindow_drawSprite(t->window, t->slose[3], NULL);
	}
	if (t->seconds2 >= (13) && t->seconds2 <= (20)) {
		sfRenderWindow_drawSprite(t->window, t->slose[4], NULL);
	}
}

void	call_over(game_t *t)
{
	t->clock2 = sfClock_create();
	while (42) {
		sfRenderWindow_clear(t->window, sfBlack);
		t->time = sfClock_getElapsedTime(t->clock2);
		t->seconds2 = t->time.microseconds / 1000000.0;
		if (sfKeyboard_isKeyPressed(sfKeyF5) == sfTrue)
			main();
		time_cutter_lose(t);
		sfRenderWindow_display(t->window);
		if (t->seconds2 >= (20.80)) {
			sfClock_restart(t->clock2);
		}
	}
}

void	time_cutter_win(game_t *t)
{
	if (t->seconds2 >= (0) && t->seconds2 <= (10))
		sfRenderWindow_drawSprite(t->window, t->swin[0], NULL);
	else
		sfRenderWindow_drawSprite(t->window, t->swin[1], NULL);
}

void	call_win(game_t *t)
{
	t->clock2 = sfClock_create();
	while (42) {
		sfRenderWindow_clear(t->window, sfBlack);
		t->time = sfClock_getElapsedTime(t->clock2);
		t->seconds2 = t->time.microseconds / 1000000.0;
		if (sfKeyboard_isKeyPressed(sfKeyF5) == sfTrue ||
		sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue ||
		sfKeyboard_isKeyPressed(sfKeyNum2) == sfTrue)
			main();
		time_cutter_win(t);
		sfRenderWindow_display(t->window);
		if (t->seconds2 >= (20.80)) {
			sfClock_restart(t->clock2);
		}
	}
}
