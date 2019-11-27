/*
** EPITECH PROJECT, 2018
** azea
** File description:
** eazeaz
*/

#include "game.h"

void	init_ennemy_hp(game_t *t)
{
	t->sbarredevie_ennemy[0] = sprite_create(t->barredevie[0], sfFalse);
	t->sbarredevie_ennemy[1] = sprite_create(t->barredevie[1], sfFalse);
	t->sbarredevie_ennemy[2] = sprite_create(t->barredevie[2], sfFalse);
	t->sbarredevie_ennemy[3] = sprite_create(t->barredevie[3], sfFalse);
	t->sbarredevie_ennemy[4] = sprite_create(t->barredevie[4], sfFalse);
	t->sbarredevie_ennemy[5] = sprite_create(t->barredevie[5], sfFalse);
	t->sbarredevie_ennemy[6] = sprite_create(t->barredevie[6], sfFalse);
	t->sbarredevie_ennemy[7] = sprite_create(t->barredevie[7], sfFalse);
	t->sbarredevie_ennemy[8] = sprite_create(t->barredevie[8], sfFalse);
	t->sbarredevie_ennemy[9] = sprite_create(t->barredevie[9], sfFalse);
	t->sbarredevie_ennemy[10] = sprite_create(t->barredevie[10], sfFalse);
}

void	set_pos_hp_ennemy(__attribute__((unused))game_t *t)
{
	t->pbarredevie_ennemy.x = 680;
	t->pbarredevie_ennemy.y = 0;
	sfSprite_setPosition(t->sbarredevie_ennemy[0], t->pbarredevie_ennemy);
	sfSprite_setPosition(t->sbarredevie_ennemy[1], t->pbarredevie_ennemy);
	sfSprite_setPosition(t->sbarredevie_ennemy[2], t->pbarredevie_ennemy);
	sfSprite_setPosition(t->sbarredevie_ennemy[3], t->pbarredevie_ennemy);
	sfSprite_setPosition(t->sbarredevie_ennemy[4], t->pbarredevie_ennemy);
	sfSprite_setPosition(t->sbarredevie_ennemy[5], t->pbarredevie_ennemy);
	sfSprite_setPosition(t->sbarredevie_ennemy[6], t->pbarredevie_ennemy);
	sfSprite_setPosition(t->sbarredevie_ennemy[7], t->pbarredevie_ennemy);
	sfSprite_setPosition(t->sbarredevie_ennemy[8], t->pbarredevie_ennemy);
	sfSprite_setPosition(t->sbarredevie_ennemy[9], t->pbarredevie_ennemy);
	sfSprite_setPosition(t->sbarredevie_ennemy[10], t->pbarredevie_ennemy);
}

void	init_texture(__attribute__((unused))game_t *t)
{
	t->barredevie[0] = texture_create("barre/0.png");
	t->barredevie[1] = texture_create("barre/10.png");
	t->barredevie[2] = texture_create("barre/20.png");
	t->barredevie[3] = texture_create("barre/30.png");
	t->barredevie[4] = texture_create("barre/40.png");
	t->barredevie[5] = texture_create("barre/50.png");
	t->barredevie[6] = texture_create("barre/60.png");
	t->barredevie[7] = texture_create("barre/70.png");
	t->barredevie[8] = texture_create("barre/80.png");
	t->barredevie[9] = texture_create("barre/90.png");
	t->barredevie[10] = texture_create("barre/100.png");
}

void	init_hp(__attribute__((unused))game_t *t)
{
	init_texture(t);
	t->sbarredevie[0] = sprite_create(t->barredevie[0], sfFalse);
	t->sbarredevie[1] = sprite_create(t->barredevie[1], sfFalse);
	t->sbarredevie[2] = sprite_create(t->barredevie[2], sfFalse);
	t->sbarredevie[3] = sprite_create(t->barredevie[3], sfFalse);
	t->sbarredevie[4] = sprite_create(t->barredevie[4], sfFalse);
	t->sbarredevie[5] = sprite_create(t->barredevie[5], sfFalse);
	t->sbarredevie[6] = sprite_create(t->barredevie[6], sfFalse);
	t->sbarredevie[7] = sprite_create(t->barredevie[7], sfFalse);
	t->sbarredevie[8] = sprite_create(t->barredevie[8], sfFalse);
	t->sbarredevie[9] = sprite_create(t->barredevie[9], sfFalse);
	t->sbarredevie[10] = sprite_create(t->barredevie[10], sfFalse);
	init_ennemy_hp(t);
	set_pos_hp(t);
	t->hp = 100;
}
