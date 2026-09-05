#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "monte_carlo.h"
#include "rng.h"
#include "var.h"

#define M_SIMULATIONS 10000
#define CONFIDENCE 0.95

int main(void)
{
	double s0;
	double mu;
	double sigma;
	double dt;
	double path[N_STEPS + 1];
	double *losses;
	double var;
	double cvar;

	srand(time(NULL));
	printf("Prix d'un actif : ");
	scanf("%lf", &s0);
	mu = 0.08;
	sigma = 0.20;
	dt = 1.0 / N_STEPS;

	losses = malloc(sizeof(double) * (M_SIMULATIONS));
	if (!losses)
		return (-1);
	int(j) = 0;
	while (j < M_SIMULATIONS)
	{
		simulate_price_path(s0, mu, sigma, dt, path);
		losses[j] = path[N_STEPS] - s0;
		j++;
	}
	qsort(losses, M_SIMULATIONS, sizeof(double), compare_doubles);
	var = ft_var(losses, M_SIMULATIONS, CONFIDENCE);
	cvar = ft_cvar(losses, M_SIMULATIONS, CONFIDENCE);
	printf("VaR (%.0f%%) : %f\n", CONFIDENCE * 100, var);
	printf("CVaR (%.0f%%) : %f\n", CONFIDENCE * 100, cvar);
	free(losses);
	return (0);
}