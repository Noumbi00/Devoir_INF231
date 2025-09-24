DOSSIER ALGORITHMIQUE de l'inversion d'un tableau

PROBLEME:
On dispose d'un tableau de taille n contenant des elements et on veut ecrire une fonction qui inverse les element de ce tableau

PRINCIPE DE LA SOLUTION:
Ma fonction (inverser) prend en parametre un tableau d'element et sa taille ;il echange le premier element avec le dernier ; le deuxieme avec l'avant-dernier....ainsi de suite jusqu'au milieu du tableau et ne retourne rien.

DICTIONNAIRE DE DONNEES:
T: tableau d'elements (entree/sortie)
n: taille du tableau ( entree)
i: indice de parcours pour incrementer
j: indice de parcours pour decrementer
temp: variable pour l'echange

ALGORITHME: inverser_tableau
entrees: un tableau T de taille n 
sortie: rien! ( car c'est un void)
 1- j'initialise i a 0 et j a n-1 
 2- a l'aide de la boucle TANT QUE ; `a temp j'affecte Tab[i] et`a tab[i] j'affecte tab[j] et enfin `a tab[j] j'affecte temp avec pour condition i<j .
 3- j'incremente i;
 4- je decremente j;
 
 COMPLEXITE:
 complexite en temps: o(n)
 complexite en espace:o(1) (on utilise qu'une variable suplementaire temp)



# Problème 2 : Produit matriciel

##  Problème
Calculer le produit de deux matrices `A` et `B` pour obtenir une matrice `C`.

##  Principe
Si `A` est une matrice de taille `m × n` et `B` une matrice de taille `n × p`, le produit `C = A × B` est une matrice `m × p` où chaque élément `c[i][j]` est calculé par :  
c[i][j] = somme (A[i][k] * B[k][j]) pour k = 0 à n-1

markdown
Copier le code

##  Données
- `A[m][n]` : première matrice  
- `B[n][p]` : deuxième matrice  
- `C[m][p]` : matrice résultat  

##  Algorithme
1. Pour chaque ligne `i` de `A` :  
   - Pour chaque colonne `j` de `B` :  
     - Initialiser `C[i][j] = 0`  
     - Pour `k = 0` à `n-1` :  
       - `C[i][j] += A[i][k] * B[k][j]`  
2. Afficher la matrice `C`.  

##  Exemple
A = |1 2|
|3 4|

B = |5 6|
|7 8|

yaml
Copier le code
Produit :
C = |15+27 16+28| = |19 22|
|35+47 36+48| |43 50|

markdown
Copier le code

##  Complexité
- Temps : O(m × n × p)  
- Espace : O(m × p)
