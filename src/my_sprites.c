/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_sprites
*/

#include "../include/my_hunter.h"
#include "../include/my.h"

void move_die_rect(struct hunt *sh)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(sh->die_clock))
    >= 150) {
        if (sh->drect.left >= 662) {
            sh->drect.left = 0;
            sfSprite_destroy(sh->dieing_sprite);
            naruto_spawn(sh);
        } else
            sh->drect.left += 112;
        sfClock_restart(sh->die_clock);
    }
}

void move_jump_rect2(struct hunt *sh)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(sh->char_sprite_clock))
    >= 1100 - sh->speed && sh->random_origin == 2) {
        if (sh->crect.left >= 222)
            return;
        else {
            sh->crect.left += 111;
        }
        sfClock_restart(sh->char_sprite_clock);
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(sh->char_sprite_clock))
    >= 1100 - sh->speed && sh->random_origin >= 3) {
        if (sh->crect.left <= 0)
            return;
        else {
            sh->crect.left -= 111;
        }
        sfClock_restart(sh->char_sprite_clock);
    }
}

void move_jump_rect(struct hunt *sh)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(sh->char_sprite_clock))
    % 1 == 0 && sh->original_charpos.x == 0) {
        sh->charpos.x += sh->speed + 1;
        sfSprite_setPosition(sh->char_sprite, sh->charpos);
        if (sh->charpos.x >= 1920) {
            sh->endgame = sfTrue;
        }
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(sh->char_sprite_clock))
    % 1 == 0 && sh->original_charpos.x == 1920) {
        sh->charpos.x -= sh->speed + 1;
        sfSprite_setPosition(sh->char_sprite, sh->charpos);
        if (sh->charpos.x <= 0) {
            sh->endgame = sfTrue;
        }
    }
    move_jump_rect2(sh);
}

void move_char_rect2(struct hunt *sh)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(sh->char_sprite_clock))
    >= 150) {
        if (sh->crect.left == 165)
            sh->crect.left = 0;
        else {
            sh->crect.left += 165;
        }
        sfClock_restart(sh->char_sprite_clock);
    }
}

void move_char_rect(struct hunt *sh)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(sh->char_sprite_clock))
    % 1 == 0 && sh->original_charpos.x == 0) {
        sh->charpos.x += sh->speed;
        sfSprite_setPosition(sh->char_sprite, sh->charpos);
        if (sh->charpos.x >= 1920) {
            sh->endgame = sfTrue;
        }
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(sh->char_sprite_clock))
    % 1 == 0 && sh->original_charpos.x == 1920) {
        sh->charpos.x -= sh->speed;
        sfSprite_setPosition(sh->char_sprite, sh->charpos);
        if (sh->charpos.x <= 0) {
            sh->endgame = sfTrue;
        }
    }
    move_char_rect2(sh);
}