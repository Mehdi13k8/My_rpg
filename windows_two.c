/*
** EPITECH PROJECT, 2018
** az
** File description:
** az
*/

#include "game.h"

void	set_pos_hp(game_t *t)
{
	t->pbarredevie.x = -700;
	t->pbarredevie.y = -50;
	sfSprite_setPosition(t->sbarredevie[0], t->pbarredevie);
	sfSprite_setPosition(t->sbarredevie[1], t->pbarredevie);
	sfSprite_setPosition(t->sbarredevie[2], t->pbarredevie);
	sfSprite_setPosition(t->sbarredevie[3], t->pbarredevie);
	sfSprite_setPosition(t->sbarredevie[4], t->pbarredevie);
	sfSprite_setPosition(t->sbarredevie[5], t->pbarredevie);
	sfSprite_setPosition(t->sbarredevie[6], t->pbarredevie);
	sfSprite_setPosition(t->sbarredevie[7], t->pbarredevie);
	sfSprite_setPosition(t->sbarredevie[8], t->pbarredevie);
	sfSprite_setPosition(t->sbarredevie[9], t->pbarredevie);
	sfSprite_setPosition(t->sbarredevie[10], t->pbarredevie);
	set_pos_hp_ennemy(t);
}

void	init_lose(__attribute__((unused))game_t *t)
{
	sfVector2f lse;
	lse.x = -550;
	lse.y = -10;
	t->lose[0] = texture_create("lose/gameover01.png");
	t->lose[1] = texture_create("lose/gameover02.png");
	t->lose[2] = texture_create("lose/gameover03.png");
	t->lose[3] = texture_create("lose/gameover04.png");
	t->lose[4] = texture_create("lose/gameover05.png");
	t->lose[5] = texture_create("lose/gameover06.png");
	t->slose[0] = sprite_create(t->lose[0], sfFalse);
	t->slose[1] = sprite_create(t->lose[1], sfFalse);
	t->slose[2] = sprite_create(t->lose[2], sfFalse);
	t->slose[3] = sprite_create(t->lose[3], sfFalse);
	t->slose[4] = sprite_create(t->lose[4], sfFalse);
	t->slose[5] = sprite_create(t->lose[5], sfFalse);
	sfSprite_setPosition(t->slose[0], lse);
}

void	pos(game_t *t)
{
	t->cf.r = 255;
	t->cf.g = 255;
	t->cf.b = 255;
	t->cf.a = 0;
	t->cf1.r = 255;
	t->cf1.g = 255;
	t->cf1.b = 255;
	t->cf1.a = 0;
	t->i1 = 0;
}

void	texture_init_two(game_t *t, sfVector2f scl)
{
	t->sattack = sprite_create(t->attack, sfFalse);
	t->pattack.x = 1920/2 - 450;
	t->pattack.y = 700;
	t->rattack.top = 40;
	t->rattack.left = 10;
	t->rattack.width = 540;
	t->rattack.height = 115;
	sfSprite_setTextureRect(t->sattack, t->rattack);
	sfSprite_setScale(t->sattack, scl);
	sfSprite_setPosition(t->sattack, t->pattack);
	t->pcross.x = 1920/2 - 420;
	t->pcross.y = 700;
	t->rcross.top = 40;
	t->rcross.left = 1150;
	t->rcross.width = 10;
	t->rcross.height = 115;
	sfSprite_setTextureRect(t->scross, t->rcross);
	sfSprite_setScale(t->scross, scl);
	sfSprite_setPosition(t->scross, t->pcross);
	pos(t);
}

void	texture_init(game_t *t)
{
	sfVector2f scl;
	scl.x = 1.6;
	scl.y = 1.6;
	t->background = texture_create("background.png");
	t->sbackground = sprite_create(t->background, sfFalse);
	t->cross = texture_create("attack_mehdi.png");
	t->scross = sprite_create(t->cross, sfFalse);
	player_create(t);
	t->attack = texture_create("attack_mehdi.png");
	texture_init_two(t, scl);
	init_hp(t);
	init_lose(t);
	t->win[0] = texture_create("win/win.png");
	t->win[1] = texture_create("win/win2.png");
	t->swin[0] = sprite_create(t->win[0], sfFalse);
	t->swin[1] = sprite_create(t->win[1], sfFalse);
}
