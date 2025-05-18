/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_endgame
*/

#include "../include/my_hunter.h"

void check_close(struct hunt *sh)
{
    if (sh->end_event.type == sfEvtClosed)
        sfRenderWindow_close(sh->window);
}

void analyse_end_events(struct hunt *sh)
{
    sfVector2i coo;

    coo = sfMouse_getPositionRenderWindow(sh->window);
    if (((coo.x >= sh->original_quitpos.x) && (coo.x <=
    (sh->original_quitpos.x + 202))) && ((coo.y >= sh->original_quitpos.y)
    && (coo.y <= (sh->original_quitpos.y + 120)))) {
        display_end_quit_tr_sprite(sh);
        if (sh->end_event.type == sfEvtMouseButtonPressed) {
            sh->endgame = sfFalse;
            sfRenderWindow_close(sh->window);
        }
    } else if (((coo.x >= sh->original_pa_pos.x) && (coo.x <=
    (sh->original_pa_pos.x + 202))) && ((coo.y >= sh->original_pa_pos.y)
    && (coo.y <= (sh->original_pa_pos.y + 120)))) {
        display_end_pa_tr_sprite(sh);
        if (sh->end_event.type == sfEvtMouseButtonPressed)
            my_reset(sh);
    } else
        display_end_sprite(sh);
    check_close(sh);
}

void endgame_gestion(struct hunt *sh)
{
    sfVector2i coo;

    while (sfRenderWindow_pollEvent(sh->window, &sh->end_event)) {
        coo = sfMouse_getPositionRenderWindow(sh->window);
        sfSprite_setPosition(sh->cursor_sprite, (sfVector2f){coo.x - 28.75, coo.y - 27.75});
        analyse_end_events(sh);
    }
}