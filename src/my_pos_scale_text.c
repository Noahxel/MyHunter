/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_pos_scale_text
*/

#include "../include/my_hunter.h"

void set_pos_text_scale3(struct hunt *sh)
{
    sfSprite_setTexture(sh->pause_menu_sprite, sh->pause_menu_text, sfFalse);
    sfSprite_setTexture(sh->resume_tr_sprite, sh->resume_tr_text, sfFalse);
    sfSprite_setPosition(sh->resume_tr_sprite, sh->playpos);
    sfSprite_setPosition(sh->resume_sprite, sh->resumepos);
    set_char_pos_scale(sh);
}

void set_pos_text_scale2(struct hunt *sh)
{
    sfText_setPosition(sh->score, sh->scorepos);
    sfText_setCharacterSize(sh->score, 70);
    sfText_setFont(sh->score, sh->font);
    sfSprite_setTexture(sh->sign_sprite, sh->sign_text, sfFalse);
    sfSprite_setPosition(sh->sign_sprite, sh->signpos);
    sfSprite_scale(sh->sign_sprite, sh->sign_resize);
    sfSprite_setTexture(sh->menu_sprite, sh->menu_text, sfFalse);
    sfSprite_setTexture(sh->play_sprite, sh->play_text, sfFalse);
    sfSprite_setTexture(sh->play_tr_sprite, sh->play_tr_text, sfFalse);
    sfSprite_setPosition(sh->menu_sprite, sh->original_endpos);
    sfSprite_setPosition(sh->play_sprite, sh->playpos);
    sfSprite_setPosition(sh->play_tr_sprite, sh->playpos);
    sfSound_setBuffer(sh->die_sound, sh->die_buf);
    sfMusic_setVolume(sh->music, 10.0);
    sfSound_setVolume(sh->die_sound, 20.0);
    sfSprite_setTexture(sh->pause_sprite, sh->pause_text, sfFalse);
    sfSprite_setPosition(sh->pause_sprite, sh->pausepos);
    sfSprite_setTexture(sh->resume_sprite, sh->resume_text, sfFalse);
    sfSprite_setPosition(sh->pause_menu_sprite, sh->pause_menupos);
    set_pos_text_scale3(sh);
}

void set_pos_text_scale(struct hunt *sh)
{
    sfSprite_scale(sh->background_sprite, sh->back_resize);
    sfSprite_scale(sh->trees_sprite, sh->trees_resize);
    sfSprite_setTexture(sh->trees_sprite, sh->trees_text, sfFalse);
    sfSprite_setTexture(sh->pa_sprite, sh->pa_text, sfFalse);
    sfSprite_setTexture(sh->pa_tr_sprite, sh->pa_tr_text, sfFalse);
    sfSprite_setTexture(sh->quit_sprite, sh->quit_text, sfFalse);
    sfSprite_setTexture(sh->quit_tr_sprite, sh->quit_tr_text, sfFalse);
    sfSprite_setTexture(sh->background_sprite, sh->background_text, sfFalse);
    sfSprite_setTexture(sh->end_sprite, sh->end_text, sfFalse);
    sfSprite_setPosition(sh->background_sprite, sh->original_backpos);
    sfSprite_setPosition(sh->pa_sprite, sh->original_pa_pos);
    sfSprite_setPosition(sh->pa_tr_sprite, sh->original_pa_pos);
    sfSprite_setPosition(sh->end_sprite, sh->original_endpos);
    sfSprite_setPosition(sh->quit_sprite, sh->original_quitpos);
    sfSprite_setPosition(sh->quit_tr_sprite, sh->original_quitpos);
    sfSprite_setTexture(sh->cursor_sprite, sh->cursor_text, sfFalse);
    sfRenderWindow_setMouseCursorVisible(sh->window, sfFalse);
    sfText_setColor(sh->score, sfBlack);
    sfSprite_scale(sh->cursor_sprite, sh->cursor_resize);
    set_pos_text_scale2(sh);
}