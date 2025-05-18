/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_scores
*/

#include "../include/my_hunter.h"

void my_scores(struct hunt *sh)
{
    int copy_count = sh->count;

    for (int i = 0; copy_count >= 1; i++) {
        sh->str_score[i] = (copy_count % 10) + '0';
        copy_count /= 10;
    }
    my_revstr(sh->str_score);
    if (sh->count == 10)
        sh->scorepos.x -= 20;
    if (sh->count == 100)
        sh->scorepos.x -= 20;
    if (sh->count == 1000)
        sh->scorepos.x -= 20;
    if (sh->count == 10000)
        sh->scorepos.x -= 20;
    if (sh->count % 5 == 1)
        sh->speed += 0.25;
    sfText_setPosition(sh->score, sh->scorepos);
    sfText_setString(sh->score, sh->str_score);
}
