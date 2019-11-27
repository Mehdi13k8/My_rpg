/*
** EPITECH PROJECT, 2018
** playside
** File description:
** hahaha
*/

#include "game.h"

void	player_right(game_t *t)
{
	if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue) {
		t->no_event = 0;
		t->pplayer.x += 5 + ((t->speed_nb[0] - 48) * 2);
		if (t->seconds > (0.0) && t->seconds < (0.25)) {
			t->rplayer.left = 10;
			t->rplayer.top = 100;
		}
		if (t->seconds > (0.25) && t->seconds < (0.50)) {
			t->rplayer.left = 102;
			t->rplayer.top = 96;
		}
		if (t->seconds > (0.50))
			sfClock_restart(t->clock);
		t->direction = 3;
	}
	else if (t->direction == 3) {
		t->rplayer.left = 95;
		t->rplayer.top = 50*2;
	}
}

void	player_left(game_t *t)
{
	if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue) {
		t->no_event = 0;
		t->pplayer.x -= 5 + ((t->speed_nb[0] - 48) * 2);
		if (t->seconds > (0.0) && t->seconds < (0.25)) {
			t->rplayer.left = 6;
			t->rplayer.top = 196;
		}
		if (t->seconds > (0.25) && t->seconds < (0.50)) {
			t->rplayer.left = 106;
			t->rplayer.top = 192;
		}
		if (t->seconds > (0.50))
			sfClock_restart(t->clock);
		t->direction = 4;
	}
	else if (t->direction == 4) {
		t->rplayer.left = 95;
		t->rplayer.top = 96*2;
	}
}

void	player_down(game_t *t)
{
	if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue) {
		t->no_event = 0;
		t->pplayer.y += 5 + ((t->speed_nb[0] - 48) * 2);
		if (t->seconds > 0.0 && t->seconds < 0.25) {
			t->rplayer.left = 0;
			t->rplayer.top = 0;
		}
		if (t->seconds > (0.25) && t->seconds < (0.50)) {
			t->rplayer.left = 98*2;
			t->rplayer.top = 0;
		}
		if (t->seconds > (0.50))
			sfClock_restart(t->clock);
		t->direction = 1;
	}
	else if (t->direction == 1) {
		t->rplayer.left = 95;
		t->rplayer.top = 0;
	}
}

void	player_up(game_t *t)
{
	if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue) {
		t->no_event = 0;
		t->pplayer.y -= 5 + ((t->speed_nb[0] - 48) * 2);
		if (t->seconds > (0.0) && t->seconds < (0.25)) {
			t->rplayer.left = 0;
			t->rplayer.top = 144*2;
		}
		if (t->seconds > (0.25) && t->seconds < (0.50)) {
			t->rplayer.left = 98*2;
			t->rplayer.top = 144*2;
		}
		if (t->seconds > (0.50))
			sfClock_restart(t->clock);
		t->direction = 2;
	}
	else if (t->direction == 2) {
		t->rplayer.left = 95;
		t->rplayer.top = 144*2;
	}
}
