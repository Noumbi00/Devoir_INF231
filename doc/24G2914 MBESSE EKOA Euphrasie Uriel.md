*DOSSIER ALGORTHMIQUE*

*Probleme3*: trouver l'indice d'un element specifique dans un tableau c'est a dire determiner si une valeur recherchee est presente ou non dans un tableau.
*principe*: parcourir le tableau elelment par element, en commencant par le premier ; comparer chaque element a la valeur recherchee. Si une correspondance est trouvee, l'on arrete la recherche et
et l'on retourne l'indice. Si l'on atteind la fin du tableau sans trouver la valeur, l'on retourne l'indication "La valeur ne se trouve pas dans le tableau"

*Dictionnaires de donnees*
Tab : Tableau de reels
valeur : element a rechercher
indice : la position d'un element ; initialise a zero
*ALGORITHME*: 
-*initialisation* : On initialise l'indice a 0
- *parcours du tableau* : on parcours chaque element du tableau en commencant par le premier
- *comparaison* : pour chaque element, on verifie si il est egal a la valeur recherchee
- *retour en cas de succes* : si on trouve une correspondance, on retourne l'indice de l'element
- *retour en cas de succes* : on retrouve une l'indication non trouvee si on atteint la fin du tableau sanstrouve la valeur
  *complexite* : en temps O(n), en espace O(1)
