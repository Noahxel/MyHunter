/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_char_setup
*/

#include "../include/my_hunter.h"

void set_char_pos_scale(struct hunt *sh)
{
    sfSprite_scale(sh->char_sprite, sh->char_resize);
    sfSprite_setTexture(sh->char_sprite, sh->char_text, sfFalse);
    sfSprite_setTexture(sh->dieing_sprite, sh->dieing_text, sfFalse);
    sfSprite_setPosition(sh->char_sprite, sh->original_charpos);
    sfSprite_setTextureRect(sh->char_sprite, sh->crect);
    sfSprite_scale(sh->dieing_sprite, sh->die_resize);
    sfSprite_setTextureRect(sh->dieing_sprite, sh->drect);
}

struct hunt *set_char_struct3(struct hunt *sh)
{
    sfVector2f die_resize = {1.5, 1.5};
    sfIntRect drect = {0, 0, 112, 119};

    sh->drect = drect;
    sh->die_resize = die_resize;
    sh->charpos = sh->original_charpos;
    sh->naruto_is_alive = sfTrue;
    sh->char_sprite = sfSprite_create();
    sh->dieing_text = sfTexture_createFromFile("my_png/Naruto_die.png", NULL);
    sh->dieing_sprite = sfSprite_create();
    return (sh);
}

struct hunt *set_char_struct2(struct hunt *sh)
{
    sfIntRect jrect = {0, 0, 111, 133};
    sfIntRect r_jrect = {222, 0, 111, 133};
    sfVector2f j_resize = {1.5, 1.5};

    if (sh->random_origin == 2) {
        sh->char_text = sfTexture_createFromFile("my_png/jump.png", NULL);
        sh->original_charpos.x = 0;
        sh->original_charpos.y = 0 + rand() % 290;
        sh->crect = jrect;
        sh->char_resize = j_resize;
    }
    if (sh->random_origin >= 3) {
        sh->char_text = sfTexture_createFromFile("my_png/rev_jump.png", NULL);
        sh->original_charpos.x = 1920;
        sh->original_charpos.y = 0 + rand() % 290;
        sh->crect = r_jrect;
        sh->char_resize = j_resize;
    }
    return (set_char_struct3(sh));
}

struct hunt *set_char_struct(struct hunt *sh)
{
    sfIntRect crect = {0, 0, 165, 130};
    sfVector2f c_resize = {1, 1};

    srand(time(NULL));
    sh->random_origin = rand() % 4;
    if (sh->random_origin == 0) {
        sh->char_text = sfTexture_createFromFile("my_png/Naruto_run.png", NULL);
        sh->original_charpos.x = 0;
        sh->original_charpos.y = 875 - rand() % 110;
        sh->crect = crect;
        sh->char_resize = c_resize;
    }
    if (sh->random_origin == 1) {
        sh->char_text = sfTexture_createFromFile("my_png/Naruto_run2.png", NULL);
        sh->original_charpos.x = 1920;
        sh->original_charpos.y = 875 - rand() % 110;
        sh->crect = crect;
        sh->char_resize = c_resize;
    }
    return (set_char_struct2(sh));
}