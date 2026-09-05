#include <stdlib.h>
#include "var.h"

int compare_doubles(const void *a, const void *b)
{
	double cmpr;

	cmpr = *(double *)a - *(double *)b;
	if (cmpr < 0)
		return (-1);
	else if (cmpr == 0)
		return (0);
	else
		return (1);
}

double ft_var(double *losses, int n, double confidence)
{
	int end;

	end = (n * (1 - confidence) - 1);
	return (losses[end]);
}

double ft_cvar(double *losses, int n, double confidence)
{
	int end;
	double somme;
	double moyenne;

	somme = 0;
	end = (n * (1 - confidence) - 1);
	int(i) = 0;
	while (i <= end)
		somme += losses[i++];
	moyenne = somme / i;
	return (moyenne);
}
