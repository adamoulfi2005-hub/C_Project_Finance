#ifndef RNG_H
#define RNG_H

typedef struct
{
	double val_1;
	double val_2;
} t_gauss;

double ft_uniform(void);
t_gauss ft_gaussian(void);

#endif