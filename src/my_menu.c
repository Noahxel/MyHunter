/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_menu
*/

#include "../include/my_hunter.h"

void display_menu_tr_sprite(struct hunt *sh)
{
    sfRenderWindow_clear(sh->window, sfBlack);
    sfRenderWindow_drawSprite(sh->window, sh->background_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->menu_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->play_tr_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->trees_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->cursor_sprite, NULL);
    sfRenderWindow_display(sh->window);
}

void display_menu_sprite(struct hunt *sh)
{
    sfRenderWindow_clear(sh->window, sfBlack);
    sfRenderWindow_drawSprite(sh->window, sh->background_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->menu_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->play_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->trees_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->cursor_sprite, NULL);
    sfRenderWindow_display(sh->window);
}

void analyse_menu_events(struct hunt *sh)
{
    sfVector2i coo;

    coo = sfMouse_getPositionRenderWindow(sh->window);
    if (((coo.x >= sh->playpos.x) && (coo.x <=
    (sh->playpos.x + 202))) && ((coo.y >= sh->playpos.y)
    && (coo.y <= (sh->playpos.y + 120)))) {
        display_menu_tr_sprite(sh);
        if (sh->end_event.type == sfEvtMouseButtonPressed)
            sh->menu = sfFalse;
    } else
        display_menu_sprite(sh);
    if (sh->end_event.type == sfEvtClosed) {
        sfRenderWindow_close(sh->window);
        return;
    }
}

void my_menu(struct hunt *sh)
{
    sfVector2i coo;

    while (sfRenderWindow_pollEvent(sh->window, &sh->end_event)) {
        coo = sfMouse_getPositionRenderWindow(sh->window);
        sfSprite_setPosition(sh->cursor_sprite, (sfVector2f){coo.x - 28.75, coo.y - 27.75});
        analyse_menu_events(sh);
    }
    return;
}