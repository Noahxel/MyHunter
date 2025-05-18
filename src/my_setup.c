/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_setup
*/

#include "../include/my_hunter.h"

struct hunt *setstruct5(struct hunt *sh)
{
    sfVector2f pause_menupos = {750, 400};

    sh->pause_menupos = pause_menupos;
    sh->resume_tr_text = sfTexture_createFromFile("my_png/resume_tr.png", NULL);
    sh->resume_tr_sprite = sfSprite_create();
    sh->is_paused = sfFalse;
    sfMusic_play(sh->music);
    return (set_char_struct(sh));
}

struct hunt *setstruct4(struct hunt *sh)
{
    sfVector2f playpos = {750, 600};
    sfVector2f pausepos = {1718, 0};

    sh->pause_menu_text = sfTexture_createFromFile("my_png/pause_menu.png",
    NULL);
    sh->resume_text = sfTexture_createFromFile("my_png/resume.png", NULL);
    sh->pause_text = sfTexture_createFromFile("my_png/pause_button.png", NULL);
    sh->menu_text = sfTexture_createFromFile("my_png/menu_txt.png", NULL);
    sh->die_buf = sfSoundBuffer_createFromFile("Sounds/die.ogg");
    sh->playpos = playpos;
    sh->pausepos = pausepos;
    sh->resumepos = sh->playpos;
    sh->pause_menu_sprite = sfSprite_create();
    sh->menu_sprite = sfSprite_create();
    sh->resume_sprite = sfSprite_create();
    sh->pause_sprite = sfSprite_create();
    sh->die_sound = sfSound_create();
    sh->menu = sfTrue;
    sh->close = sfFalse;
    return (setstruct5(sh));
}

struct hunt *setstruct3(struct hunt *sh)
{
    sfVector2f signpos = {0, 0};
    sfVector2f sign_resize = {1.5, 1};
    sfVector2f scorepos = {130, 15};
    sfVector2f cursor_resize = {0.5, 0.5};

    sh->play_text = sfTexture_createFromFile("my_png/play.png", NULL);
    sh->play_tr_text = sfTexture_createFromFile("my_png/play_tr.png", NULL);
    sh->play_tr_sprite = sfSprite_create();
    sh->play_sprite = sfSprite_create();
    sh->music = sfMusic_createFromFile("Sounds/music.ogg");
    sh->cursor_resize = cursor_resize;
    sh->cursor_text = sfTexture_createFromFile("my_png/cursor.png", NULL);
    sh->cursor_sprite = sfSprite_create();
    sh->speed = 1.5;
    sh->str_score[0] = '\0';
    sh->scorepos = scorepos;
    sh->score = sfText_create();
    sh->sign_resize = sign_resize;
    sh->signpos = signpos;
    return(setstruct4(sh));
}

struct hunt *setstruct2(struct hunt *sh)
{
    sfVector2f original_papos = {650, 600};

    sh->end_text = sfTexture_createFromFile("my_png/Endgame.png", NULL);
    sh->sign_text = sfTexture_createFromFile("my_png/sign.png", NULL);
    sh->background_text = sfTexture_createFromFile("my_png/back.png", NULL);
    sh->trees_text = sfTexture_createFromFile("my_png/trees.png", NULL);
    sh->pa_text = sfTexture_createFromFile("my_png/pa.png", NULL);
    sh->pa_tr_text = sfTexture_createFromFile("my_png/pa_tr.png", NULL);
    sh->sign_sprite = sfSprite_create();
    sh->pa_sprite = sfSprite_create();
    sh->pa_tr_sprite = sfSprite_create();
    sh->trees_sprite = sfSprite_create();
    sh->background_sprite = sfSprite_create();
    sh->end_sprite = sfSprite_create();
    sh->char_sprite_clock = sfClock_create();
    sh->die_clock = sfClock_create();
    sh->original_pa_pos = original_papos;
    sh->endgame = sfFalse;
    sh->font = sfFont_createFromFile("njnaruto.ttf");
    return (setstruct3(sh));
}

struct hunt *setstruct(struct hunt *sh)
{
    sfVector2f original_endpos = {550, 400};
    sfVector2f original_quitpos = {1050, 600};
    sfVideoMode videomode = {1920, 1080, 30};
    sfVector2f back_resize = {0.5, 0.5};
    sfVector2f trees_resize = {0.5, 0.5};

    sh->window = sfRenderWindow_create(videomode, "My_Hunter",
    sfClose | sfResize, NULL);
    sh->quit_text = sfTexture_createFromFile("my_png/Quit.png", NULL);
    sh->quit_tr_text = sfTexture_createFromFile("my_png/Quit_tr.png", NULL);
    sh->quit_sprite = sfSprite_create();
    sh->quit_tr_sprite = sfSprite_create();
    sh->original_endpos = original_endpos;
    sh->original_quitpos = original_quitpos;
    sh->back_resize = back_resize;
    sh->trees_resize = trees_resize;
    sh->count = 0;
    return (setstruct2(sh));
}