# Problème 8 : Calcul du produit vectoriel

##  Problème
Calculer le vecteur perpendiculaire à deux vecteurs `a` et `b` en 3D.

##  Principe
Le produit vectoriel se calcule avec la formule :  

a × b = (a2b3 - a3b2, a3b1 - a1b3, a1b2 - a2b1)

markdown
Copier le code

Le résultat est un vecteur perpendiculaire à `a` et `b`.

##  Données
- `a1, a2, a3` : composantes du vecteur `a`  
- `b1, b2, b3` : composantes du vecteur `b`  
- `c1, c2, c3` : composantes du vecteur résultat `c = a × b`  

##  Algorithme
1. Lire les composantes de `a` et `b`.  
2. Calculer :
   - `c1 = a2*b3 - a3*b2`  
   - `c2 = a3*b1 - a1*b3`  
   - `c3 = a1*b2 - a2*b1`  
3. Afficher le vecteur `c = (c1, c2, c3)`  

##  Exemple
Vecteurs :  
a = (1, 2, 3)
b = (4, 5, 6)

yaml
Copier le code
Produit vectoriel :  
c = (-3, 6, -3)

markdown
Copier le code

## ⏱ Complexité
- Temps : O(1)  
- Espace : O(1)


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
