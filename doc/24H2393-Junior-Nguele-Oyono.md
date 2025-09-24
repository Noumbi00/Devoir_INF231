# Problème 9 : Produit vectoriel × matrice

##  Problème
Calculer le produit d’un vecteur `v` en 3D par une matrice `M` 3×3.

##  Principe
Si le vecteur `v = (v1, v2, v3)` et la matrice  
M = | m11 m12 m13 |
| m21 m22 m23 |
| m31 m32 m33 |

go
Copier le code
alors le produit `v × M` est défini par :  
c1 = v1m11 + v2m21 + v3m31
c2 = v1m12 + v2m22 + v3m32
c3 = v1m13 + v2m23 + v3*m33

markdown
Copier le code
Le résultat est un nouveau vecteur `c = (c1, c2, c3)`.

##  Données
- `v1, v2, v3` : composantes du vecteur `v`  
- `m11..m33` : éléments de la matrice `M`  
- `c1, c2, c3` : composantes du vecteur résultat `c = v × M`  

##  Algorithme
1. Lire le vecteur `v` et la matrice `M`.  
2. Calculer :
   - `c1 = v1*m11 + v2*m21 + v3*m31`  
   - `c2 = v1*m12 + v2*m22 + v3*m32`  
   - `c3 = v1*m13 + v2*m23 + v3*m33`  
3. Afficher le vecteur `c = (c1, c2, c3)`  

##  Exemple
Vecteur :  
v = (1, 2, 3)

yaml
Copier le code
Matrice :  
M = | 1 0 0 |
| 0 1 0 |
| 0 0 1 |

yaml
Copier le code
Produit :  
c = (1, 2, 3)

markdown
Copier le code

##  Complexité
- Temps : O(1)  
- Espace : O(1)
