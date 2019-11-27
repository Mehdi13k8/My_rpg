/*
** EPITECH PROJECT, 2018
** onsfight?
** File description:
** mehdi
*/

#include "game.h"

int	ma_random(int rnd)
{
	while ((rnd = random() % 1320) < 950 &&
	(rnd = random() % 1320) < 950) {
		rnd = random() % 1320;
	}
	rnd = random() % 2;
	return (rnd);
}

void	move_crs(game_t *t)
{
	static int i = 0;
	int rnd = random() % 45;

	if (i == 0) {
		t->pcross.x = t->pcross.x + rnd;
	}
	else if (i == 1) {
		t->pcross.x = t->pcross.x - rnd;
	}
	if (t->pcross.x <= 550) {
		i = 0;
	}
	if (t->pcross.x >= 1320) {
		i = 1;
	}
	sfSprite_setPosition(t->scross, t->pcross);
}

void	do_in_show(game_t *t)
{
	move_crs(t);
	sfRenderWindow_drawSprite(t->window, t->sattack, NULL);
	sfRenderWindow_drawSprite(t->window, t->scross, NULL);
	sfRenderWindow_drawSprite(t->window, t->sally, NULL);
	sfRenderWindow_drawSprite(t->window, t->sennemy, NULL);
	t->hp == 100 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[10], NULL) : 0 ;
	do_in_show_two(t);
	do_in_show_ennemy(t);
	if (t->hp <= 0) {
		sfMusic_stop(t->mattack);
		call_over(t);
	}
}

int	even_cmbat(game_t *t, int i)
{
	static int moving1 = 0;

	if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue)
		moving1 += 1;
	if (sfKeyboard_isKeyPressed(sfKeySpace) == sfFalse)
		moving1 = 0;
	if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
		i = 1;
	if (moving1 == 1 && t->pcross.x >= 760 && t->pcross.x <= 1100) {
		sfMusic_play(t->mattack2);
		t->hp_ennemy = t->hp_ennemy - 10;
		sleep(0.9);
	}
	else if (moving1 == 1 &&
	(t->pcross.x >= 1100 || t->pcross.x <= 760)) {
		t->hp = t->hp - 10;
		usleep(0.9);
	}
	return (i);
}

void	combat_one(__attribute__((unused))game_t *t)
{
	int i = 0;

	t->hp_ennemy = 100;
	sfMusic_pause(t->mbackground);
	if (sfMusic_getStatus(t->mbackground) == sfPaused ||
	sfMusic_getStatus(t->mbackground) == sfStopped) {
		sfMusic_play(t->mattack);
	} while (i == 0) {
		i = even_cmbat(t, i);
		sfRenderWindow_clear(t->window, sfBlack);
		do_in_show(t);
		if (t->hp_ennemy <= 0) {
			i = 1;
			t->ennemy_total != 0 ? t->ennemy_total -= 1: 0;
			if (t->hp <= 90)
				t->hp += 10;
		}
		sfRenderWindow_display(t->window);
	}
	sfMusic_stop(t->mattack);
}
