/*
** EPITECH PROJECT, 2018
** npc
** File description:
** npc
*/

#include "game.h"

void	set_npc(game_t *t)
{
	t->rct.top = 5;
	t->rct.left = 0;
	t->rct.width = 20;
	t->rct.height = 20;
	t->size.x = 2;
	t->size.y = 2;
	t->vieux = texture_create("vieux.png");
	t->svieux = sprite_create(t->vieux, sfFalse);
	t->pvieux.x = 14000;
	t->pvieux.y = 5000;
	sfSprite_setPosition(t->svieux, t->pvieux);
	sfSprite_setTextureRect(t->svieux, t->rct);
	sfSprite_setScale(t->svieux, t->size);
}
