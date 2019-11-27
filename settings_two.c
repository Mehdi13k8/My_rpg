/*
** EPITECH PROJECT, 2018
** set
** File description:
** set
*/

#include "game.h"

void	check_skin(game_t *t)
{
	char *red = "Red", *blau = "Blue";
	t->player_skin == 1 ? sfText_setString(t->color_txt, blau) : 0;
	t->player_skin == 2 ? sfText_setString(t->color_txt, red) : 0;
	t->player_skin == 3 ? sfText_setString(t->color_txt, t->skin) : 0;
}

int	page_down(game_t *t, int idx, char *str)
{
	if (sfKeyboard_isKeyPressed(sfKeyPageDown) == sfTrue && str[0] > '0'
	&& idx == 1) {
		str[0] = str[0] - 1;
		sfText_setString(t->speed_lvl, str);
		t->speed_nb[0] = str[0];
		sfText_setString(t->speed_lvl, t->speed_nb);
	}
	return (0);
}

int	page_up(game_t *t, int idx, char *str)
{
	if (sfKeyboard_isKeyPressed(sfKeyPageUp) == sfTrue &&
	str[0] < '9' && idx == 1) {
		str[0] += 1;
		sfText_setString(t->speed_lvl, str);
		t->speed_nb[0] = str[0];
		sfText_setString(t->speed_lvl, t->speed_nb);
		printf("in it %c\n", str[0]);
	}
	return (0);
}

int	set_color_idx(game_t *t, int *idx, float *vollume, int *num)
{
	int i = 0;

	sfRenderWindow_clear(t->window, sfBlue);
	sfRenderWindow_drawSprite(t->window, t->sbackground, NULL);
	sfText_setColor(t->volume, sfWhite);
	sfText_setColor(t->speed, sfWhite);
	sfText_setColor(t->color, sfWhite);
	*idx == 0 ? sfText_setColor(t->volume, sfGreen):
	sfText_setColor(t->volume, sfWhite);
	*idx == 1 ? sfText_setColor(t->speed, sfGreen):
	sfText_setColor(t->speed, sfWhite);
	*idx == 2 ? sfText_setColor(t->color, sfGreen):
	sfText_setColor(t->color, sfWhite);
	*idx == 3 ? sfText_setColor(t->back, sfGreen):
	sfText_setColor(t->back, sfWhite);
	i = ma_settings_event(t, idx, vollume, num);
	set_pos(t);
	return (i);
}

void	set_donne(game_t *t)
{
	t->pplay.x = 80000;
	t->pplay.y = 0;
	t->psettings.x = 105000;
	t->psettings.y = 0;
	t->pquit.x = 105000;
	t->pquit.y = 0;
	t->pback.x = 750;
	t->pback.y = 550;
	t->pvolume.x = 500;
	t->pvolume.y = 310;
	t->pvolume2.x = 700;
	t->pvolume2.y = 310;
	t->pspeed.x = 600;
	t->pspeed.y = 420;
	t->pspeed2.x = 700;
	t->pspeed2.y = 420;
	t->pcolor.x = 700;
	t->pcolor.y = 500;
	t->pcolor_txt.x = 870;
	t->pcolor_txt.y = 500;
}
