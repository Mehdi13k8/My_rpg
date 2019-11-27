/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** Brandon Segers
*/

#include "game.h"

void	set_size(game_t *t)
{
	sfText_setCharacterSize(t->settings, 30);
	sfText_setCharacterSize(t->color, 30);
	sfText_setCharacterSize(t->speed, 30);
	sfText_setCharacterSize(t->volume, 30);
	sfText_setCharacterSize(t->color_txt, 30);
	sfText_setCharacterSize(t->back, 30);
}

void	set_strings(game_t *t)
{
	sfText_setString(t->settings, "Settings");
	sfText_setString(t->volume, "Volume :");
	sfText_setString(t->color, "Color");
	sfText_setString(t->speed, "Speed");
	sfText_setString(t->speed_lvl, t->speed_nb);
	sfText_setString(t->color_txt, t->skin);
	sfText_setString(t->back, "Back");
	sfText_setString(t->volume_txt, t->vol_nb);
}

void	create_text(game_t *t)
{
	t->settings = sfText_create();
	t->volume = sfText_create();
	t->volume_txt = sfText_create();
	t->color = sfText_create();
	t->speed = sfText_create();
	t->speed_lvl = sfText_create();
	t->back = sfText_create();
	t->color_txt = sfText_create();
}

void	text_init2(game_t *t)
{
	int i = 0;
	t->vol_nb = malloc(sizeof(char) * 100);
	t->vol_nb[0] = 'O';
	while (i != 10) {
		t->vol_nb[i] = 'O';
		i++;
		t->vol_nb[i] = '\0';
	}
	t->speed_nb = malloc(sizeof(char) * 2);
	t->skin = malloc(sizeof(char) * 7);
	t->skin = "Default\0";
	t->speed_nb[0] = '0';
	t->speed_nb[1] = 0;
	create_text(t);
	set_strings(t);
	sfText_setColor(t->volume_txt, sfGreen);
	set_size(t);
	set_fonts(t);
}

void	text_init(game_t *t)
{
	t->font = sfFont_createFromFile("arial.otf");
	t->play = sfText_create();
	sfText_setString(t->play, "Start");
	sfText_setCharacterSize(t->play, 30);
	t->quit = sfText_create();
	sfText_setString(t->quit, "Quit");
	sfText_setCharacterSize(t->quit, 30);
	t->history = sfText_create();
	sfText_setString(t->history, "");
	sfText_setCharacterSize(t->history, 30);
	text_init2(t);
	text_pos(t);
}
