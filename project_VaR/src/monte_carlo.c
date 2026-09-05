#include <math.h>
#include "monte_carlo.h"
#include "rng.h"

void simulate_price_path(double s0, double mu, double sigma, double dt, double *prices)
{
	double Z;
	double deriv;

	prices[0] = s0;
	deriv = mu - (pow(sigma, 2) / 2);
	int(i) = 1;
	while (i <= N_STEPS)
	{
		Z = ft_gaussian();
		prices[i] = prices[i - 1] * exp((deriv * dt) + (sigma * sqrt(dt) * Z));
		i++;
	}
}
