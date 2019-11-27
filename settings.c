/*
** EPITECH PROJECT, 2018
** sett
** File description:
** ts
*/

#include "game.h"

int	go_left(game_t __attribute__((unused)) *t, int *idxc)
{
	int idx = *idxc;

	if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue) {
		if (idx > 0)
			idx--;
		usleep(100000);
	}
	else if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue) {
		if (idx < 3)
			idx++;
		usleep(100000);
	}
	return (idx);
}

int	ma_settings_event(game_t *t, int *idx, float *vollume, int *num)
{
	int i = 0;

	if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
		printf("good");
		i = 1;
	}
	change_var_even(idx, num, vollume);
	if (sfKeyboard_isKeyPressed(sfKeyPageUp) == sfTrue && *idx == 2)
		t->player_skin != 3 ? t->player_skin++ : 0;
	else if (sfKeyboard_isKeyPressed(sfKeyPageDown) == sfTrue && *idx == 2)
		t->player_skin != 1 ? t->player_skin-- : 0;
	if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue && *idx == 3) {
		usleep(300000);
		i = 1;
	}
	*idx = go_left(t, idx);
	return (i);
}

void	set_pos(game_t *t)
{
	set_donne(t);
	sfText_setPosition(t->volume, t->pvolume);
	sfText_setPosition(t->volume_txt, t->pvolume2);
	sfText_setPosition(t->speed, t->pspeed);
	sfText_setPosition(t->speed_lvl, t->pspeed2);
	sfText_setPosition(t->color, t->pcolor);
	sfText_setPosition(t->color_txt, t->pcolor_txt);
	sfText_setPosition(t->back, t->pback);
}

void	render(game_t *t)
{
	sfRenderWindow_drawText(t->window, t->volume, NULL);
	sfRenderWindow_drawText(t->window, t->volume_txt, NULL);
	sfRenderWindow_drawText(t->window, t->speed, NULL);
	sfRenderWindow_drawText(t->window, t->speed_lvl, NULL);
	sfRenderWindow_drawText(t->window, t->color, NULL);
	sfRenderWindow_drawText(t->window, t->color_txt, NULL);
	sfRenderWindow_drawText(t->window, t->back, NULL);
	sfRenderWindow_display(t->window);
}

void	ma_settings(game_t *t)
{
	static int num = 10;
	static float vollume = 100;
	int i = 0, idx = 0, numcpy = 0;
	char str[1] = "0";

	while (i == 0) {
		i = set_color_idx(t, &idx, &vollume, &num);
		render(t);
		check_skin(t);
		page_up(t, idx, str);
		page_down(t, idx, str);
		while (numcpy <= num) {
			t->vol_nb[numcpy] = 'O';
			numcpy += 1;
			t->vol_nb[numcpy] = '\0';
		}
		numcpy = 0;
		sfText_setString(t->volume_txt, t->vol_nb);
		sfListener_setGlobalVolume(vollume);
	}
}
