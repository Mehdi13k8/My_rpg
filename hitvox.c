/*
** EPITECH PROJECT, 2018
** hitx
** File description:
** thitx
*/

#include "game.h"

void	to_left(game_t *t, float l, float k)
{
	float i = sfSprite_getGlobalBounds(t->splayer).left;
	float j = sfSprite_getGlobalBounds(t->splayer).top;

	if ((i + 57 >= k && i + 57 <= k + 96) &&
	((j > l && j < l + 96) || (j + 87 > l && j + 87 < l + 96)) &&
	t->direction == 3) {
		t->pplayer.x = t->test[t->map_id][t->f].left - 57;
	}
}

void	to_right(game_t *t, float l, float k)
{
	float i = sfSprite_getGlobalBounds(t->splayer).left;
	float j = sfSprite_getGlobalBounds(t->splayer).top;

	if ((i >= k && i <= k + 96) &&
	((j > l && j < l + 96) || (j + 87 > l && j + 87 < l + 96)) &&
	t->direction == 4) {
		t->pplayer.x = t->test[t->map_id][t->f].left + 96;
	}
}

void	to_up(game_t *t, float l, float k)
{
	float i = sfSprite_getGlobalBounds(t->splayer).left;
	float j = sfSprite_getGlobalBounds(t->splayer).top;

	if ((j >= l && j <= l + 96) &&
	((i > k && i < k + 96) || (i + 57 > k && i + 57 < k + 96)) &&
	t->direction == 2) {
		t->pplayer.y = t->test[t->map_id][t->f].top + 96;
	}
}

void	to_down(game_t *t, float l, float k)
{
	float i = sfSprite_getGlobalBounds(t->splayer).left;
	float j = sfSprite_getGlobalBounds(t->splayer).top;

	if ((j + 87 >= l && j + 87 <= l + 96)
	&& ((i > k && i < k + 96) || (i + 57 > k && i + 57 < k + 96)) &&
	t->direction == 1) {
		t->pplayer.y = t->test[t->map_id][t->f].top - 87;
	}
}
