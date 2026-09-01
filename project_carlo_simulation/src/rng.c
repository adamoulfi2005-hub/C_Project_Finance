#include <stdlib.h>
#include <math.h>
#include "rng.h"
#define M_PI 3.14159265358979323846

double ft_uniform(void)
{
	double uniform;

	uniform = (double)rand() / (double)RAND_MAX;
	return (uniform);
}

double ft_gaussian(void)
{
	double unif_0;
	double unif_1;
	double log_norma;
	double norma;

	unif_0 = ft_uniform();
	while (unif_0 == 0)
		unif_0 = ft_uniform();
	unif_1 = ft_uniform();
	log_norma = sqrt((-2) * log(unif_0));
	norma = log_norma * cos(2 * M_PI * unif_1);
	return (norma);
}