/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** Brandon Segers
*/

#include "game.h"

void	call_on_num(game_t *t, int nb)
{
	t->valeur = 0;
	if (t->map[nb][t->i][t->j] == '1') {
		t->test[nb][t->z].left = t->x;
		t->test[nb][t->z].top = t->y;
		t->test[nb][t->z].height = 96;
		t->test[nb][t->z].width = 96;
		printf("%d : x = %.f | y = %.f\n", t->z,
		t->test[nb][t->z].left, t->test[nb][t->z].top);
		t->z++;
	}
}

void	norm_hitvox(game_t *t, float l, float k)
{
	to_left(t, l, k);
	to_right(t, l, k);
	to_up(t, l, k);
	to_down(t, l, k);
	t->f++;
}

void	hitvox(game_t *t)
{
	while (t->f < 23*13) {
		float k = t->test[t->map_id][t->f].left;
		float l = t->test[t->map_id][t->f].top;
		norm_hitvox(t, l, k);
	}
	t->f = 0;
}

void	map_norm(game_t *t, int nb)
{
	while (t->i < 13) {
		while (t->j <= 23) {
			call_on_num(t, nb);
			t->x += 96;
			t->j++;
		}
		t->x = -96;
		t->j = 0;
		t->y += 96;
		t->i++;
	}
}

void	map(game_t *t, char *str, int nb)
{
	int fd = 0, i = 0;
	int j = 0;
	char c;

	t->i = 0;
	t->j = 0;
	t->f = 0;
	t->x = -96;
	t->y = -96;
	fd = open(str, O_RDONLY);
	t->z = 0;
	while (read(fd, &c, 1) > 0) {
		if (j >= 23){
			i++;
			j = 0;
		}
		t->map[nb][i][j] = c;
		j++;
	}
	map_norm(t, nb);
}
