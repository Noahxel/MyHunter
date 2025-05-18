/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** display_zat
*/

#include "../include/my_hunter.h"

void display_sprite(struct hunt *sh, sfSprite *sprite)
{
    sfRenderWindow_clear(sh->window, sfBlack);
    sfRenderWindow_drawSprite(sh->window, sh->background_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->trees_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->sign_sprite, NULL);
    sfRenderWindow_drawText(sh->window, sh->score, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->pause_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->cursor_sprite, NULL);
    sfRenderWindow_display(sh->window);
}

void display_end_quit_tr_sprite(struct hunt *sh)
{
    sfRenderWindow_clear(sh->window, sfBlack);
    sfRenderWindow_drawSprite(sh->window, sh->background_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->end_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->quit_tr_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->pa_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->trees_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->cursor_sprite, NULL);
    sfRenderWindow_display(sh->window);
}

void display_end_pa_tr_sprite(struct hunt *sh)
{
    sfRenderWindow_clear(sh->window, sfBlack);
    sfRenderWindow_drawSprite(sh->window, sh->background_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->end_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->quit_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->pa_tr_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->trees_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->cursor_sprite, NULL);
    sfRenderWindow_display(sh->window);
}

void display_end_sprite(struct hunt *sh)
{
    sfRenderWindow_clear(sh->window, sfBlack);
    sfRenderWindow_drawSprite(sh->window, sh->background_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->end_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->quit_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->pa_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->trees_sprite, NULL);
    sfRenderWindow_drawSprite(sh->window, sh->cursor_sprite, NULL);
    sfRenderWindow_display(sh->window);
}