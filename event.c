/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** Brandon Segers
*/

#include "game.h"

void	histoire(game_t *t)
{
	char *txt = strca(t->s1, t->s2, t->s3, t->s4);

	sfText_setColor(t->history, t->cf1);
	sfText_setString(t->history, txt);
	if (t->i1 == 5) {
		t->cf1.a = t->alpha1 += 1.0;
		if (t->alpha1 > 255) {
			t->cf1.a = 255;
		}
		if (t->s >= 750 ||
		sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
			t->phistory.x = 10000;
			t->i1 = 6;
			sfMusic_stop(t->mbackground);
		}
		t->s++;
	}
}

void	loading(game_t *t)
{
	if ((t->menu1 == 3 &&
	sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue)
	|| t->i1 == 1) {
		if (t->menu1 == 3)
			t->i1 = 1;
		loading_pos(t);
		if (t->alpha < 0) {
			t->cf.a = 0.0;
			t->menu1 = 3;
			t->i1 = 5;
		}
	}
	if (t->menu1 == 4 && sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue) {
		ma_settings(t);
	}
	if (t->menu1 == 2 && sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue)
		sfRenderWindow_close(t->window);
}

void	menu_loading(game_t *t)
{
	sfText_setPosition(t->play, t->pplay);
	sfText_setPosition(t->settings, t->psettings);
	sfText_setPosition(t->quit, t->pquit);
	sfText_setPosition(t->history, t->phistory);
	sfSprite_setColor(t->sbackground, t->cf);
	if (t->i1 == 0) {
		t->cf.a = t->alpha += 0.5;
		if (t->alpha >= 255) {
			t->alpha = 255;
			text_select(t);
			text_pos_e(t);
		}
	}
	loading(t);
}

void	events(game_t *t)
{
	menu_loading(t);
	if (t->i1 == 5) {
		histoire(t);
	}
	if (t->i1 == 6) {
		player_move(t);
		t->cmap.r = 255;
		t->cmap.g = 255;
		t->cmap.b = 255;
		t->cmap.a = 255;
		sfSprite_setColor(t->sprite , t->cmap);
		hitvox(t);
		t->pvieux.x = 555;
		t->pvieux.y = 801;
		sfSprite_setPosition(t->svieux, t->pvieux);
	}
	if (sfKeyboard_isKeyPressed(sfKeyDelete) == sfTrue)
		combat_one(t);
}

void	map_two(game_t *t)
{
	t->co = 0;
	t->t = 0;
	t->cmap.r = 255;
	t->cmap.g = 255;
	t->cmap.b = 255;
	t->cmap.a = 0;
	t->titleset = sfTexture_createFromFile("texture.png", NULL);
	t->sprite = sfSprite_create();
	sfSprite_setTexture(t->sprite, t->titleset, sfTrue);
	sfSprite_setColor(t->sprite, t->cmap);
}
