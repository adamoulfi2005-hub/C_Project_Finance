# Project_Muller
  Un générateur de nombres aléatoires suivant une distribution de loi normale.

# Le But ?
  Ce générateur de nombres aléatoires sert de brique de base permettant de faire des simulations de Monte Carlo. En finance, les rendements d'un actif sont généralement modélisés comme suivant une loi normale. Avoir un générateur capable de produire ces valeurs normalement distribuées est donc la première étape indispensable avant de pouvoir simuler des trajectoires de prix réalistes (et par la suite calculer des mesures de risques comme la VaR ou la CVaR).

# Le Fonctionement 
  Notre fichier rng.c comporte 2 fonctions :

  - ft_uniform() : renvoie des valeurs suivant une distribution uniforme sur [0,1] (ces valeurs serviront de matière première a ft_gaussian()). Pour cela, j'appelle rand() qui renvoie un entier aléatoire entre 0 et RAND_MAX (une constante définissant la valeur maximale que rand() peut retourner). Ainsi, pour forcer ma fonction à renvoyer des valeurs comprises entre 0 et 1, j'ai juste à diviser la valeur random par le RAND_MAX (sans oublier de les convertir en double, bien sûr).

  - ft_gaussian() : renvoie des valeurs aléatoires suivant une distribution de loi normale. Pour convertir nos valeurs uniformes en valeurs suivant une loi normale, j'utilise la formule de Box-Muller. Je fais bien attention a ce que U0 (unif_0) soit différent de 0 afin d'éviter log(0). Je retourne une struct t_gauss parce que Box-Muller produit une paire de valeurs à chaque appel (en c chaque fonction retourne qu'une seule valeur).