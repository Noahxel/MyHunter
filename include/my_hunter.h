/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_hunter
*/

#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Audio.h>
#include <SFML/System/Export.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include "my.h"

#ifndef MY_HUNTER_H_
    #define MY_HUNTER_H_


struct hunt {
    sfRenderWindow *window;
    sfText *score;
    char str_score[4];
    float speed;
    int count;
    int random;
    int j_random;
    int random_origin;
    sfEvent pause_event;
    sfTexture *pause_menu_text;
    sfSprite *pause_menu_sprite;
    sfVector2f pause_menupos;
    sfTexture *resume_text;
    sfSprite *resume_sprite;
    sfTexture *resume_tr_text;
    sfSprite *resume_tr_sprite;
    sfVector2f resumepos;
    sfBool close;
    sfBool is_paused;
    sfTexture *pause_text;
    sfSprite *pause_sprite;
    sfVector2f pausepos;
    sfVector2f pause_resize;
    sfSound *die_sound;
    sfSoundBuffer *die_buf;
    sfTexture *menu_text;
    sfSprite *menu_sprite;
    sfTexture *play_text;
    sfSprite *play_sprite;
    sfTexture *play_tr_text;
    sfSprite *play_tr_sprite;
    sfVector2f playpos;
    sfBool menu;
    sfMusic *music;
    sfVector2f cursor_resize;
    sfVector2f cursorpos;
    sfTexture *cursor_text;
    sfSprite *cursor_sprite;
    sfVector2f signpos;
    sfFont *font;
    sfVector2f sign_resize;
    sfVector2f scorepos;
    sfIntRect jrect;
    sfVector2f original_backpos;
    sfVector2f original_charpos;
    sfVector2f original_endpos;
    sfVector2f original_quitpos;
    sfVector2f original_pa_pos;
    sfVector2f charpos;
    sfVector2f char_resize;
    sfVector2f back_resize;
    sfVector2f trees_resize;
    sfVector2f die_resize;
    sfTexture *pa_text;
    sfTexture *pa_tr_text;
    sfTexture *sign_text;
    sfSprite *sign_sprite;
    sfSprite *pa_sprite;
    sfSprite *pa_tr_sprite;
    sfTexture *background_text;
    sfSprite *background_sprite;
    sfTexture *char_text;
    sfSprite *char_sprite;
    sfTexture *rev_char_text;
    sfSprite *rev_char_sprite;
    sfTexture *trees_text;
    sfSprite *trees_sprite;
    sfTexture *end_text;
    sfSprite *end_sprite;
    sfTexture *dieing_text;
    sfSprite *dieing_sprite;
    sfTexture *quit_text;
    sfSprite *quit_sprite;
    sfTexture *quit_tr_text;
    sfSprite *quit_tr_sprite;
    sfClock *char_sprite_clock;
    sfClock *die_clock;
    sfIntRect crect;
    sfIntRect drect;
    sfEvent event;
    sfEvent end_event;
    sfBool endgame;
    sfBool naruto_is_alive;
};

void move_char_rect(struct hunt *sh);

void move_char_rect2(struct hunt *sh);

void display_sprite(struct hunt *sh, sfSprite *sprite);

void display_end_quit_tr_sprite(struct hunt *sh);

void display_end_pa_tr_sprite(struct hunt *sh);

void display_end_sprite(struct hunt *sh);

void manage_mouse_click(struct hunt *sh, sfRenderWindow *window);

void analyse_events(struct hunt *sh, sfRenderWindow *window, sfEvent event);

void set_pos_text_scale(struct hunt *sh);

void my_hunter(struct hunt *sh);

void endgame_gestion(struct hunt *sh);

void move_die_rect(struct hunt *sh);

struct hunt *setstruct(struct hunt *sh);

void display_end_sprite(struct hunt *sh);

struct hunt *set_char_struct(struct hunt *sh);

void set_char_pos_scale(struct hunt *sh);

void my_reset(struct hunt *sh);

void my_scores(struct hunt *sh);

void set_pos_text_scale(struct hunt *sh);

void set_pos_text_scale2(struct hunt *sh);

void move_jump_rect(struct hunt *sh);

void naruto_spawn(struct hunt *sh);

void my_menu(struct hunt *sh);

void display_pause_menu(struct hunt *sh);

void my_pause_menu(struct hunt *sh);

#endif /* !MY_HUNTER_H_ */