/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_hunter
*/

#include "../include/my_hunter.h"

void naruto_spawn(struct hunt *sh)
{
    set_char_struct(sh);
    set_char_pos_scale(sh);
}

void my_reset(struct hunt *sh)
{
    sfVector2f scorepos = {130, 15};

    sfRenderWindow_clear(sh->window, sfBlack);
    sh = set_char_struct(sh);
    set_char_pos_scale(sh);
    sh->scorepos = scorepos;
    sh->speed = 1.5;
    sh->str_score[0] = '\0';
    sh->str_score[1] = '\0';
    sh->str_score[2] = '\0';
    sh->str_score[3] = '\0';
    sh->str_score[4] = '\0';
    sh->count = 0;
    sh->endgame = sfFalse;
}


void manage_naruto(struct hunt *sh)
{
    sfVector2f die_pos;

    if (sh->naruto_is_alive == sfTrue) {
        sfSprite_setTextureRect(sh->char_sprite, sh->crect);
        display_sprite(sh, sh->char_sprite);
        if (sh->random_origin > 1) {
            move_jump_rect(sh);
        } else {
            move_char_rect(sh);
        }
    } else {
        die_pos.x = sh->charpos.x + 20;
        die_pos.y = sh->charpos.y - 30;
        sfSprite_setTextureRect(sh->dieing_sprite, sh->drect);
        sfSprite_setPosition(sh->dieing_sprite, die_pos);
        display_sprite(sh, sh->dieing_sprite);
        move_die_rect(sh);
    }
}

void my_hunter(struct hunt *sh)
{
    sfVector2i coo;

    coo = sfMouse_getPositionRenderWindow(sh->window);
    sfSprite_setPosition(sh->cursor_sprite, (sfVector2f)
    {coo.x - 28.75, coo.y - 27.75});
    while (sfRenderWindow_pollEvent(sh->window, &sh->event))
        analyse_events(sh, sh->window, sh->event);
    manage_naruto(sh);
}