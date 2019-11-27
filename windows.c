/*
** EPITECH PROJECT, 2018
** mOBy_rpg
** File description:
** Brandon segers
*/

#include "game.h"

void	window_mode(game_t *t)
{
	sfVideoMode mode = {1920, 1080, 32};
	char *s = "Undertale Reborn";

	t->window = sfRenderWindow_create(mode, s, sfResize | sfClose, NULL);
	sfRenderWindow_setFramerateLimit(t->window, 60);
}

void	music_create(game_t *t)
{
	t->mbackground = sfMusic_createFromFile("mbackground.ogg");
	t->mattack2 = sfMusic_createFromFile("attack2.ogg");
	sfMusic_play(t->mbackground);
	t->mattack = sfMusic_createFromFile("battle.ogg");
}

sfTexture	*texture_create(char *str)
{
	sfTexture* texture;

	texture = sfTexture_createFromFile(str, NULL);
	return (texture);
}

sfSprite	*sprite_create(sfTexture* texture, sfBool choice)
{
	sfSprite* sprite;

	sprite = sfSprite_create();
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfTexture_setRepeated(texture, choice);
	return (sprite);
}
