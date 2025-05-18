/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** display_zis
*/

#include "../include/my_hunter.h"

void display_pause_tr_menu(struct hunt *sh)
{
    sfRenderWindow_clear(sh->window, sfBlack);
    sfRenderWindow_drawSprite(sh->window, sh->background_sprite, NULL);
    if (sh->naruto_is_alive == sfTrue)
        sfRenderWindow_drawSprite(sh->window, sh->char_sprite, NULL);
    else
        sfRenderWindow_drawSprite(sh->window, sh->dieing_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->trees_sprite, NULL);
    sfRenderWindow_drawText(sh->window, sh->score, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->pause_menu_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->resume_tr_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->cursor_sprite, NULL);
    sfRenderWindow_display(sh->window);
}

void display_pause_menu(struct hunt *sh)
{
    sfRenderWindow_clear(sh->window, sfBlack);
    sfRenderWindow_drawSprite(sh->window, sh->background_sprite, NULL);
    if (sh->naruto_is_alive == sfTrue)
        sfRenderWindow_drawSprite(sh->window, sh->char_sprite, NULL);
    else
        sfRenderWindow_drawSprite(sh->window, sh->dieing_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->trees_sprite, NULL);
    sfRenderWindow_drawText(sh->window, sh->score, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->pause_menu_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->resume_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->cursor_sprite, NULL);
    sfRenderWindow_display(sh->window);
}

void manage_pause_events(struct hunt *sh)
{
    sfVector2i coo;

    coo = sfMouse_getPositionRenderWindow(sh->window);
    if (sh->pause_event.type == sfEvtMouseButtonPressed &&
    (((coo.x >= sh->playpos.x) && (coo.x <= (sh->playpos.x + 202)))
    && ((coo.y >= sh->playpos.y) && (coo.y <= (sh->playpos.y + 120))))) {
        sh->is_paused = sfFalse;
        sfRenderWindow_clear(sh->window, sfBlack);
    }
    if (sh->pause_event.type == sfEvtClosed)
        sfRenderWindow_close(sh->window);
    if (sh->pause_event.type == sfEvtKeyPressed) {
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue) {
            sh->is_paused = sfFalse;
        }
    }
}

void my_pause_menu(struct hunt *sh)
{
    sfVector2i coo;

    while (sh->is_paused == sfTrue) {
        coo = sfMouse_getPositionRenderWindow(sh->window);
        sfSprite_setPosition(sh->cursor_sprite, (sfVector2f){coo.x - 28.75, coo.y - 27.75});
        if (((coo.x >= sh->playpos.x) && (coo.x <= (sh->playpos.x + 202)))
        && ((coo.y >= sh->playpos.y) && (coo.y <= (sh->playpos.y + 120)))) {
            display_pause_tr_menu(sh);
        } else
            display_pause_menu(sh);
        while (sfRenderWindow_pollEvent(sh->window, &sh->pause_event)) {
            manage_pause_events(sh);
        }
    }
}