/*
** EPITECH PROJECT, 2018
** ae
** File description:
** aze
*/

#include "game.h"

void	menu_norm(game_t *t)
{
	if (t->menu1 == 4) {
		sfText_setColor(t->play, sfWhite);
		sfText_setColor(t->quit, sfWhite);
		sfText_setColor(t->settings, sfGreen);
	}
	if (t->menu1 == 3) {
		sfText_setColor(t->quit, sfWhite);
		sfText_setColor(t->play, sfGreen);
		sfText_setColor(t->settings, sfWhite);
	}
	if (t->menu1 == 2) {
		sfText_setColor(t->quit, sfGreen);
		sfText_setColor(t->play, sfWhite);
		sfText_setColor(t->settings, sfWhite);
	}
}

void	text_select(game_t *t)
{
	static int i = 0;

	if (i == 0) {
		i = 1;
		t->menu1 = 2;
	}
	if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue && i > 1) {
		i -= 1;
		t->menu1 -= 1;
		usleep(200000);
	}
	if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue && i < 3) {
		i += 1;
		t->menu1 += 1;
		usleep(200000);
	}
	menu_norm(t);
}

void	text_pos_e(game_t *t)
{
	t->pplay.x = 800;
	t->pplay.y = 800;
	t->pquit.x = 1050;
	t->pquit.y = 800;
	t->psettings.x = 900;
	t->psettings.y = 600;
}

void	text_pos(game_t *t)
{
	t->pplay.x = 80000;
	t->pplay.y = 80000;
	t->pquit.x = 105000;
	t->pquit.y = 10000;
	t->phistory.x = 350;
	t->phistory.y = 300;
	t->psettings.x = 90033;
	t->psettings.y = 60033;
	t->alpha = 0;
	t->alpha1 = 0;
	t->s = 0;
}

void	set_fonts(game_t *t)
{
	sfText_setFont(t->color, t->font);
	sfText_setFont(t->color_txt, t->font);
	sfText_setFont(t->speed, t->font);
	sfText_setFont(t->speed_lvl, t->font);
	sfText_setFont(t->volume, t->font);
	sfText_setFont(t->volume_txt, t->font);
	sfText_setFont(t->back, t->font);
	sfText_setFont(t->history, t->font);
	sfText_setFont(t->play, t->font);
	sfText_setFont(t->quit, t->font);
	sfText_setFont(t->settings, t->font);
}
