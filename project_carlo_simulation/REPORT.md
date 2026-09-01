# Project_Carlo
  Un simulateur de trajectoires de prix basé sur le mouvement brownien géométrique (GBM), utilisant le générateur gaussien du projet précédent (Project_Muller).

# Le But ?
  Ce simulateur sert à générer des trajectoires de prix réalistes pour un actif financier. Le modèle utilisé est le mouvement brownien géométrique : à chaque pas de temps, le prix évolue en fonction d'un rendement moyen (mu) et d'une volatilité (sigma), avec un choc aléatoire tiré à chaque étape via ft_gaussian(). C'est la brique suivante après le générateur de nombres aléatoires : une fois qu'on sait produire des valeurs suivant une loi normale, on peut simuler comment un prix évolue jour après jour sous l'effet du hasard. Plusieurs trajectoires générées côte à côte permettent de voir la dispersion des scénarios possibles, et servent de base au calcul de mesures de risque comme la VaR et la CVaR.

# Le Fonctionnement
  Mon fichier monte_carlo.c comporte 1 fonction principale :

  - simulate_price_path() : remplit un tableau de prix représentant une trajectoire complète sur N_STEPS pas (252, soit environ un an de bourse). Le premier prix (prices[0]) est fixé au prix de départ (s0). Ensuite, à chaque pas, le prix suivant est calculé à partir du prix précédent avec la formule prices[t] = prices[t-1] * exp((mu - sigma²/2) * dt + sigma * sqrt(dt) * Z), où Z est une valeur gaussienne tirée à chaque itération via ft_gaussian(). dt représente la durée d'un pas de temps (1/252, soit une fraction d'année), et reste constant sur toute la simulation.

  Dans main.c, j'appelle cette fonction 20 fois dans une boucle, chaque appel générant une trajectoire différente stockée dans un tableau à deux dimensions (prices[20][N_STEPS+1]). Ça permet de visualiser plusieurs scénarios possibles d'évolution du même actif, tous partant du même prix initial mais divergeant au fil du temps sous l'effet de l'aléa.