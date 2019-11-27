/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** Brandon Segers
*/

#ifndef MY_H
#define MY_H

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

typedef struct game_s {
	sfRenderWindow* window;
	sfEvent event;
	sfTexture* background;
	sfSprite* sbackground;
	sfTexture* vieux;
	sfSprite* svieux;
	sfIntRect rvieux;
	sfVector2f pvieux;
	sfTexture* cross;
	sfSprite* scross;
	sfIntRect rcross;
	sfVector2f pcross;
	sfTexture* ennemy;
	sfSprite* sennemy;
	sfIntRect rennemy;
	sfVector2f pennemy;
	sfTexture* barredevie[11];
	sfSprite* sbarredevie[11];
	sfVector2f pbarredevie;
	sfSprite* sbarredevie_ennemy[11];
	sfVector2f pbarredevie_ennemy;
	sfTexture* lose[6];
	sfSprite* slose[6];
	sfTexture* win[2];
	sfSprite* swin[2];
	sfTexture* ally;
	sfSprite* sally;
	sfIntRect rally;
	sfVector2f pally;
	sfTexture* attack;
	sfSprite* sattack;
	sfIntRect rattack;
	sfVector2f pattack;
	sfMusic* mattack;
	sfMusic* mattack2;
	sfTexture* player;
	sfSprite* splayer;
	sfTexture* player_red;
	sfSprite* splayer_red;
	sfTexture* player_blue;
	sfSprite* splayer_blue;
	sfIntRect rplayer;
	sfIntRect rmap[3];
	sfVector2f pmap;
	sfVector2f pplayer;
	int direction;
	sfClock *clock;
	sfClock *clock2;
	sfTime time;
	sfTime time2;
	float seconds;
	float seconds2;
	sfTexture* titleset;
	sfSprite* sprite;
	char map[4][13][23];
	sfFloatRect test[4][299];
	sfMusic* mbackground;
	sfFont* font;
	sfVector2f pplay;
	sfVector2f pvolume;
	sfVector2f pvolume2;
	sfVector2f pspeed;
	sfVector2f pspeed2;
	sfVector2f pcolor;
	sfVector2f pcolor_txt;
	sfVector2f psettings;
	sfVector2f pback;
	sfVector2f pquit;
	sfText* play;
	sfText* volume;
	sfText* volume_txt;
	sfText*	color;
	sfText*	color_txt;
	sfText* speed;
	sfText* speed_lvl;
	sfText* back;
	sfText* settings;
	sfText* quit;
	sfText* history;
	sfVector2f phistory;
	sfColor cf;
	sfColor cf1;
	sfColor cmap;
	float alpha;
	float alpha1;
	int z;
	int t;
	float x;
	float y;
	int i1;
	int menu1;
	int s;
	int i;
	int j;
	int co;
	int f;
	int valeur;
	int speed_time;
	char *vol_nb;
	char *speed_nb;
	char *skin;
	int  player_skin;
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	int hp;
	int hp_ennemy;
	int map_id;
	sfIntRect rct;
	sfVector2f size;
	sfText* old;
	int ennemy_total;
	int no_event;
}game_t;

void	window_mode(game_t *t);
void	texture_init(game_t *t);
sfTexture	*texture_create(char *str);
sfSprite	*sprite_create(sfTexture* texture, sfBool choice);
void	music_create(game_t *t);
void	events(game_t *t);
void	text_pos_e(game_t *t);
void	text_pos(game_t *t);
void	set_fonts(game_t *t);
void	text_init(game_t *t);
void	player_create(game_t *t);
void	player_move(game_t *t);
void	player_down(game_t *t);
void	player_up(game_t *t);
void	player_right(game_t *t);
void	player_left(game_t *t);
void	text_select(game_t *t);
void	map(game_t *t, char *str, int nb);
void	map_two(game_t *t);
void	ma_settings(game_t *t);
void	combat_one(game_t *t);
void	hitvox(game_t *t);
void	check_skin(game_t *t);
int	page_down(game_t *t, int idx, char *str);
int	page_up(game_t *t, int idx, char *str);
int	set_color_idx(game_t *t, int *idx, float *vollume, int *num);
void	set_donne(game_t *t);
int	ma_settings_event(game_t *t, int *idx, float *vollume, int *num);
void	set_pos(game_t *t);
void	change_var_even(int *idx, int *num, float *vollume);
void	to_left(game_t *t, float l, float k);
void	to_right(game_t *t, float l, float k);
void	to_up(game_t *t, float l, float k);
void	to_down(game_t *t, float l, float k);
char	*strca(char *s, char *s2, char *s3, char *s4);
void	pos(game_t *t);
void	texture_init(game_t *t);
void	texture_init_two(game_t *t, sfVector2f scl);
void	loading_pos(game_t *t);
void	init_hp_ennemy(game_t *t);
void	init_hp(game_t *t);
void	set_pos_hp(game_t *t);
void	set_pos_hp_ennemy(game_t *t);
void	call_over(game_t *t);
int	main(void);
void	do_in_show_two(game_t *t);
void	do_in_show_ennemy(game_t *t);
void	call_win(game_t *t);
void	set_npc(game_t *t);
void	events_seconds(game_t *t);
void	ptit_vieu(game_t *t);
void	other_vieu(game_t *t);

#endif /* MY_H */
