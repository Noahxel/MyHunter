/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_events
*/

#include "../include/my_hunter.h"

void manage_mouse_click(struct hunt *sh, sfRenderWindow *window)
{
    sfVector2i coo;

    coo = sfMouse_getPositionRenderWindow(window);
    if (((coo.x >= sh->charpos.x) && (coo.x <=
    (sh->charpos.x + 165))) && ((coo.y >= sh->charpos.y)
    && (coo.y <= (sh->charpos.y + 130))) && sh->naruto_is_alive == sfTrue) {
        sfSprite_destroy(sh->char_sprite);
        sh->count++;
        my_scores(sh);
        sfSound_play(sh->die_sound);
        sh->naruto_is_alive = sfFalse;
    } else if (((coo.x >= sh->pausepos.x) && (coo.x <=
    (sh->pausepos.x + 202))) && ((coo.y >= sh->pausepos.y)
    && (coo.y <= (sh->pausepos.y + 120)))) {
        if (sh->event.type == sfEvtMouseButtonPressed) {
            sh->is_paused = sfTrue;
            my_pause_menu(sh);
        }
    }
}

void analyse_events(struct hunt *sh, sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (event.type == sfEvtMouseButtonPressed)
        manage_mouse_click(sh, window);
    if (event.type == sfEvtKeyPressed) {
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
            sh->is_paused = sfTrue;
            my_pause_menu(sh);
        }
    }
}