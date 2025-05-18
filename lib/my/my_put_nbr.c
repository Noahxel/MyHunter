/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** return numbers
*/

#include <stdio.h>
#include <stdlib.h>

int my_putstr(char const *str);

int my_compute_power_rec(int nb , int p);

char *my_put_nbr(int nb)
{
	int cpynb = nb;
	char *result;
	int cmt = 0;
	int lenb = 0;

	for (; cpynb >= 1; lenb++)
		cpynb /= 10;
	cpynb = nb;
	for (int i = 0; 0 < lenb; lenb--, i++) {
		while (cpynb > 9)
			cpynb /= 10;
		if (i == 0)
			result = malloc((cmt + 1) * sizeof(char));
		result[i] = cpynb + '0';
		nb = nb - (cpynb * my_compute_power_rec(10, lenb - 1));
		cpynb = nb;
	}
	my_putstr(result);
	return (result);
}