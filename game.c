/*
** EPITECH PROJECT, 2018
** Brandon Segers
** File description:
** rzerzer
*/

#include "game.h"

void	draw(game_t *t)
{
	sfRenderWindow_clear(t->window, sfBlack);
	sfRenderWindow_drawSprite(t->window, t->sbackground, NULL);
	sfRenderWindow_drawSprite(t->window, t->sprite, NULL);
	sfRenderWindow_drawText(t->window, t->play, NULL);
	sfRenderWindow_drawText(t->window, t->settings, NULL);
	sfRenderWindow_drawText(t->window, t->quit, NULL);
	sfRenderWindow_drawText(t->window, t->history, NULL);
	if (t->player_skin == 3)
		sfRenderWindow_drawSprite(t->window, t->splayer, NULL);
	else if (t->player_skin == 2)
		sfRenderWindow_drawSprite(t->window, t->splayer_red, NULL);
	else
		sfRenderWindow_drawSprite(t->window, t->splayer_blue, NULL);
	sfRenderWindow_drawSprite(t->window, t->svieux, NULL);
	events_seconds(t);
	if (t->no_event == 1)
		sfRenderWindow_drawText(t->window, t->old, NULL);
	sfRenderWindow_display(t->window);
}

void	destroy(game_t *t)
{
	sfTexture_destroy(t->background);
	sfText_destroy(t->play);
	sfText_destroy(t->settings);
	sfText_destroy(t->quit);
	sfSprite_destroy(t->sbackground);
	sfMusic_destroy(t->mbackground);
	sfRenderWindow_destroy(t->window);
}

void	initialisation(game_t *t)
{
	t->speed_time = 9;
	t->map_id = 0;
	window_mode(t);
	texture_init(t);
	text_init(t);
	music_create(t);
	t->s1 = malloc(sizeof(char) * 100);
	t->s2 = malloc(sizeof(char) * 100);
	t->s3 = malloc(sizeof(char) * 100);
	t->s4 = malloc(sizeof(char) * 100);
	t->s1 = "Il etait une fois une petite fille vivant"
	"dans le monde des \nhumains.C'\0";
	t->s2 = "est une fille qui n'est pas ordinaire, "
	"elle est \norphelin et vit toute\0";
	t->s3 = "seule, un beau jour elle decrouvre le \n"
	"monde des monstres et se perd, v\0";
	t->s4 = "ous allez decouvrir son histoire.\0";
	t->ennemy_total = 3;
	ptit_vieu(t);
}

void	game(__attribute__((unused))game_t *t)
{
	map(t, "map00.map", 0);
	map(t, "map01.map", 1);
	initialisation(t);
	map_two(t);
	while (sfRenderWindow_isOpen(t->window)) {
		events(t);
		while (sfRenderWindow_pollEvent(t->window, &t->event)) {
			if (t->event.type == sfEvtClosed)
				sfRenderWindow_close(t->window);
		}
		draw(t);
		if (t->ennemy_total == 0)
			call_win(t);
	}
	destroy(t);
}

int	main(void)
{
	game_t t;

	t.player_skin = 1;
	game(&t);
	return (0);
}
