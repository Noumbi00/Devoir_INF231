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



 # Problème 6 : Calcul de la médiane

##  Problème
Trouver la médiane d’un ensemble de nombres entiers.

##  Principe
- La médiane est la valeur qui sépare la moitié supérieure et la moitié inférieure d’un ensemble de nombres.  
- Pour un nombre impair d’éléments, c’est l’élément du milieu après tri.  
- Pour un nombre pair d’éléments, c’est la moyenne des deux éléments du milieu après tri.

##  Données
- `tableau[]` : tableau des nombres entiers  
- `n` : nombre d’éléments dans le tableau  
- `mediane` : valeur de la médiane calculée  

##  Algorithme
1. Trier le tableau en ordre croissant.  
2. Si `n` est impair :  
   - `mediane = tableau[n/2]`  
3. Sinon (n pair) :  
   - `mediane = (tableau[n/2 - 1] + tableau[n/2]) / 2`  
4. Afficher la médiane.  

##  Exemple
Tableau :  
tableau = [3, 1, 4, 2, 5]

yaml
Copier le code
Après tri :  
[1, 2, 3, 4, 5]

Copier le code
Médiane :  
mediane = 3

cpp
Copier le code

Tableau pair :  
tableau = [3, 1, 4, 2]

yaml
Copier le code
Après tri :  
[1, 2, 3, 4]

Copier le code
Médiane :  
mediane = (2 + 3)/2 = 2.5

markdown
Copier le code

##  Complexité
- Temps : O(n log n) (tri)  
- Espace : O(1) si tri en place
 
