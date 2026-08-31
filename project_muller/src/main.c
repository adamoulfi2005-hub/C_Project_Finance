#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "rng.h"

int main(void)
{
	t_gauss resultat;

	srand(time(NULL));
	resultat = ft_gaussian();
	printf("%f\n%f\n", resultat.val_1, resultat.val_2);
	return (0);
}