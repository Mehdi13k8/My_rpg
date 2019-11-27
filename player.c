/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** Brandon Segers
*/

#include "game.h"

void	create_ennemy_ally(game_t *t)
{
	t->ennemy = texture_create("Papyrus1.png");
	t->sennemy = sprite_create(t->ennemy, sfFalse);
	t->pennemy.x = 1400;
	t->pennemy.y = 200;
	sfSprite_setPosition(t->sennemy, t->pennemy);
	t->ally = texture_create("sprite_perso.png");
	t->sally = sprite_create(t->ally, sfFalse);
	t->pally.x = 0;
	t->pally.y = 790;
	sfSprite_setPosition(t->sally, t->pally);
}

void	player_create(game_t *t)
{
	t->player = texture_create("perso.png");
	t->splayer = sprite_create(t->player, sfFalse);
	t->player_red = texture_create("perso_red.png");
	t->splayer_red = sprite_create(t->player_red, sfFalse);
	t->player_blue = texture_create("perso_Blue.png");
	t->splayer_blue = sprite_create(t->player_blue, sfFalse);
	t->rplayer.left = 95;
	t->rplayer.top = 0;
	t->rplayer.width = 57;
	t->rplayer.height = 87;
	t->pplayer.x = 0;
	t->pplayer.y = 96 * 8;
	t->clock = sfClock_create();
	create_ennemy_ally(t);
	set_npc(t);
}

void	player_move(game_t *t)
{
	sfSprite_setPosition(t->splayer, t->pplayer);
	sfSprite_setTextureRect(t->splayer, t->rplayer);
	sfSprite_setPosition(t->splayer_red, t->pplayer);
	sfSprite_setTextureRect(t->splayer_red, t->rplayer);
	sfSprite_setPosition(t->splayer_blue, t->pplayer);
	sfSprite_setTextureRect(t->splayer_blue, t->rplayer);
	t->time = sfClock_getElapsedTime(t->clock);
	t->seconds = t->time.microseconds / 1000000.0;
	if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue)
		player_down(t);
	else if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue)
		player_up(t);
	else if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue)
		player_right(t);
	else if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue)
		player_left(t);
	(sfKeyboard_isKeyPressed(sfKeyP) ||
	sfKeyboard_isKeyPressed(sfKeyEscape)) == sfTrue ? ma_settings(t) : 0;
	usleep(3000);
}
