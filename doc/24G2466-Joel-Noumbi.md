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
