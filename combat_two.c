/*
** EPITECH PROJECT, 2018
** cmbat
** File description:
** cmbat
*/

#include "game.h"

void	do_in_show_two(game_t *t)
{
	t->hp == 90 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[9], NULL) : 0 ;
	t->hp == 80 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[8], NULL) : 0 ;
	t->hp == 70 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[7], NULL) : 0 ;
	t->hp == 60 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[6], NULL) : 0 ;
	t->hp == 50 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[5], NULL) : 0 ;
	t->hp == 40 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[4], NULL) : 0 ;
	t->hp == 30 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[3], NULL) : 0 ;
	t->hp == 20 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[2], NULL) : 0 ;
	t->hp == 10 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[1], NULL) : 0 ;
	t->hp == 0 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie[0], NULL) : 0 ;
}

void	norm_cut_show(game_t *t)
{
	t->hp_ennemy == 10 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[1], NULL) : 0 ;
	t->hp_ennemy == 0 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[0], NULL) : 0 ;
}

void	do_in_show_ennemy(game_t *t)
{
	t->hp_ennemy == 100 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[10], NULL) : 0 ;
	t->hp_ennemy == 90 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[9], NULL) : 0 ;
	t->hp_ennemy == 80 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[8], NULL) : 0 ;
	t->hp_ennemy == 70 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[7], NULL) : 0 ;
	t->hp_ennemy == 60 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[6], NULL) : 0 ;
	t->hp_ennemy == 50 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[5], NULL) : 0 ;
	t->hp_ennemy == 40 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[4], NULL) : 0 ;
	t->hp_ennemy == 30 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[3], NULL) : 0 ;
	t->hp_ennemy == 20 ?
	sfRenderWindow_drawSprite(t->window, t->sbarredevie_ennemy[2], NULL) : 0 ;
	norm_cut_show(t);
}
