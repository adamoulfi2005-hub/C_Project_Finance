#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

int main(void)
{
	double prices[] = {100.0, 102.5, 101.0, 104.0, 103.2, 106.5, 105.0, 108.0, 107.3, 110.0};
	int n_prices;
	double *returns;
	int n_returns;
	int i;

	n_prices = sizeof(prices) / sizeof(prices[0]);
	returns = ft_rendement(prices, n_prices);
	if (!returns)
	{
		printf("erreur: ft_rendement a echoue\n");
		return (1);
	}
	n_returns = n_prices - 1;
	i = 0;
	while (i < n_returns)
	{
		printf("rendement jour %d: %f\n", i + 1, returns[i]);
		i++;
	}
	printf("---\n");
	printf("moyenne   : %f\n", ft_moyenne(returns, n_returns));
	printf("ecart-type: %f\n", ft_ecart_type(returns, n_returns));
	printf("min       : %f\n", ft_min_val(returns, n_returns));
	printf("max       : %f\n", ft_max_val(returns, n_returns));
	free(returns);
	return (0);
}
