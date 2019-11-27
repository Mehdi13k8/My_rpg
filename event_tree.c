/*
** EPITECH PROJECT, 2018
** azeaz
** File description:
** aze
*/

#include "game.h"

void	other_vieu(game_t *t)
{
	char *str = malloc(sizeof(char) * 500);
	str[0] = 0;
	char *str2 = "Hohoho mon chere jeune homme\n"
	"Cela fait longtemps qu aucuns preux combattant ne soit arriver\n"
	"pour delivrer ce monde du mal qui le ronge\n"
	"Il te faudra detruire ";
	char strx[2];
	strx[0] = t->ennemy_total + 48;
	strx[1] = 0;
	char *str3 = " ennemies pour sauver le monde du mal!\n"
	"Ps: Pour se battre contre ces monstres appuie sur del\0";
	str = strcat(str, str2);
	str = strcat(str, strx);
	str = strcat(str, str3);
	sfText_setString(t->old, str);
}
