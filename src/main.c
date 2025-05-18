/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** my_hunter
*/

#include "../include/my_hunter.h"

int handle_errors(int argc, char **argv)
{
    if (argc == 2 && (my_strcmp(argv[1], "-h") == 0)) {
        my_putstr("\n\t\t[WELCOME]\n\n1. just execute ./my_hunter to play\n");
        my_putstr("2. Narutos will spawn on the ground or in trees\n");
        my_putstr("3. They are faster and faster\n");
        my_putstr("4. You can explore pause menu by pressing Space or ");
        my_putstr("press the pause button on the top right of the screen\n");
        my_putstr("5. There is an endgame menu (be cool with him ^^)\n");
        my_putstr("\nGood Game !\n");
        return (0);
    } else if (argc != 1)
        return (84);
    return (1);
}

int manage_game()
{
    struct hunt *sh = malloc(sizeof(struct hunt));

    sh = setstruct(sh);
    set_pos_text_scale(sh);
    while (sfRenderWindow_isOpen(sh->window)) {
        if (sh->menu == sfTrue)
            my_menu(sh);
        if (sh->endgame == sfFalse && sh->menu == sfFalse)
            my_hunter(sh);
        if (sh->endgame == sfTrue)
            endgame_gestion(sh);
    }
    sfMusic_stop(sh->music);
    sfMusic_destroy(sh->music);
    sfSound_destroy(sh->die_sound);
    return (0);
}

int main(int argc, char **argv)
{
    int check = handle_errors(argc, argv);

    if (check == 0)
        return (0);
    if (check == 84)
        return (84);
    if (check == 1)
        manage_game();
    return (0);
}