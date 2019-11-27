/*
** EPITECH PROJECT, 2018
** az
** File description:
** aze
*/

#include "game.h"

char	*strca(char *str, char *str2, char *str3, char *str4)
{
	char *txt = malloc(sizeof(char) * strlen(str)+strlen(str2) +
	strlen(str3) + strlen(str4) + 1);
	txt[0] = '\0';
	txt = strcat(txt, str);
	txt = strcat(txt, str2);
	txt = strcat(txt, str3);
	txt = strcat(txt, str4);
	return (txt);
}

void	change_var_even(int *idx, int *num, float *vollume)
{
	if (sfKeyboard_isKeyPressed(sfKeyPageDown) == sfTrue && *idx == 0 &&
	*num > 0) {
		*num -= 1;
		*vollume -= 10;
	}
	else if (sfKeyboard_isKeyPressed(sfKeyPageUp) == sfTrue && *idx == 0 &&
	*num < 10) {
		*num += 1;
		*vollume += 10;
	}
}
