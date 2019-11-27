/*
** EPITECH PROJECT, 2018
** 2ndfile
** File description:
** aze
*/

#include "game.h"

void	init_vieu(game_t *t)
{
	sfVector2f pos;
	pos.x = 500, pos.y = 500;
	t->old = sfText_create();
	char *str = malloc(sizeof(char) * 500);
	char *str2 = "Hohoho mon chere jeune homme\n"
	"Cela fait longtemps qu aucuns preux combattant ne soit arriver\n"
	"pour delivrer ce monde du mal qui le ronge\n"
	"Il te faudra detruire ";
	char strx[2];
	strx[0] = t->ennemy_total + 48;
	strx[1] = 0;
	char *str3 = " ennemies pour sauver le monde du mal!\n"
	"Ps: Pour se battre contre ces monstres appuie sur del\0";
	str = strcat(str, str2);
	str = strcat(str, strx);
	str = strcat(str, str3);
	sfText_setFont(t->old, t->font);
	sfText_setCharacterSize(t->old, 15);
	sfText_setColor(t->old, sfGreen);
	sfText_setPosition(t->old, t->pplayer);
}

void	ptit_vieu(game_t *t)
{
	init_vieu(t);
}

void	grand_vieu(game_t *t)
{
	static int tot = 0;
	static int event = 0;

	tot++;
	if (tot == 1)
		if (event != 1) {
			printf("event = %d\n", event);
			if (tot > 0) {
				event = 1;
				tot = 0;
			}
		}
	if (event == 1) {
		t->no_event = 1;
	}
	event = 0;
	other_vieu(t);
}

void	events_seconds(game_t *t)
{
	if (sfKeyboard_isKeyPressed(sfKeyReturn) == sfTrue)
		if (t->pplayer.x >= t->pvieux.x-82
		&& t->pplayer.x <= t->pvieux.x +82
		&& t->pplayer.y >= t->pvieux.x-82
		&& t->pplayer.y <= t->pvieux.y +82)
			grand_vieu(t);
}

void	loading_pos(game_t *t)
{
	t->pplay.x = 80000;
	t->pplay.y = 80000;
	t->psettings.x = 105000;
	t->psettings.y = 10000;
	t->pquit.x = 105000;
	t->pquit.y = 10000;
	t->cf.a = t->alpha -= 2.0;
}
