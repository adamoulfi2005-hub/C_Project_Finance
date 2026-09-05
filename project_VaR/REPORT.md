# Project_VaR/CVaR
  Mesure le risque de marché d'un portefeuille d'instruments financiers. Représente la limite de perte qui ne devrait pas être dépassée avec une probabilité fixée sur un horizon de temps donné (généralement un intervalle de confiance de 95%).

# Le But ?
  La VaR est très utile pour la simplicité de son interprétation, mais aussi pour la comparaison du risque entre différentes classes d'actifs (actifs à haut risque/haut rendement et actifs stables). 

# Le Fonctionement 
  Notre fichier var.c comporte 3 fonctions :

  - compare_doubles() : Utilisée dans la fonction qsort(), elle permet de trier le tableau *losses (plus-value / moins-value par rapport au prix initial s0) dans l'ordre croissant. Ainsi les valeurs couvrant les 5 premiers % serviront à déterminer la Var et CVaR.

  - ft_var() : renvoie la valeur située à la frontière de l'intervalle de confiance 95%, telle qu'il y a 95% de chance que le résultat final soit au-dessus de cette valeur.

  - ft_cvar() : mesure la perte moyenne attendue dans les scénarios où la perte dépasse ce seuil de VaR.