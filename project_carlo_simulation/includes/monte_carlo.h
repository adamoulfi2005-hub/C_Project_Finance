#ifndef MONTE_CARLO_H
#define MONTE_CARLO_H

#define N_STEPS 252

void simulate_price_path(double s0, double mu, double sigma, double dt, double *prices);

#endif
