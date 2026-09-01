#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "monte_carlo.h"
#include "rng.h"

int main(void)
{
	double s0;
	double mu;
	double sigma;
	double dt;
	double prices[5][N_STEPS + 1];

	srand(time(NULL));
	printf("Prix d'un actif : ");
	scanf("%lf", &s0);
	mu = 0.08;
	sigma = 0.20;
	dt = 1.0 / N_STEPS;
	int(j) = 0;
	while (j <= 19)
	{
		simulate_price_path(s0, mu, sigma, dt, prices[j]);
		int(i) = 0;
		while (i <= N_STEPS)
			printf("%f\n", prices[j][i++]);
		printf("\n\n");
		j++;
	}
	return (0);
}