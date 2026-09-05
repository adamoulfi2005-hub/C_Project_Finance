#include "stats.h"
#include <stdlib.h>
#include <math.h>

double ft_somme(double *data, int n)
{
	double somme;

	somme = 0.0;
	int(a) = 0;
	while (a < n)
		somme += data[a++];
	return (somme);
}

double ft_moyenne(double *data, int n)
{
	double moyenne;

	moyenne = ft_somme(data, n) / n;
	return (moyenne);
}

double ft_ecart_type(double *data, int n)
{
	double somme;
	double ecart_type;

	somme = 0.0;
	int(a) = 0;
	while (a < n)
		somme += pow((data[a++] - ft_moyenne(data, n)), 2);
	ecart_type = sqrt(somme / n);
	return (ecart_type);
}

double ft_min_val(double *data, int n)
{
	double min_val;

	int(a) = 0;
	min_val = data[a];
	while (a < n)
	{
		if (min_val > data[a])
			min_val = data[a];
		a++;
	}
	return (min_val);
}

double ft_max_val(double *data, int n)
{
	double max_val;

	int(a) = 0;
	max_val = data[a];
	while (a < n)
	{
		if (max_val < data[a])
			max_val = data[a];
		a++;
	}
	return (max_val);
}

double *ft_rendement(double *prices, int n_prices)
{
	double *tab;
	double rendement;

	tab = malloc(sizeof(double) * (n_prices - 1));
	if (!tab)
		return (NULL);
	int(a) = 0;
	int(b) = 0;
	while (a < n_prices - 1)
	{
		rendement = ((prices[a + 1] - prices[a]) / prices[a]);
		tab[b] = rendement;
		b++;
		a++;
	}
	return (tab);
}