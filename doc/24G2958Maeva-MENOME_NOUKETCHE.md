#  Dossier Algorithmique



1. **Somme de deux matrices**
5. **Vérification si un tableau est trié**

---

## 1️ Somme de deux matrices

###  Problème

Calculer la somme de deux matrices `A` et `B` de dimensions `n × m`.

###  Principe

La somme de deux matrices est une matrice du même format.
Chaque élément est obtenu en additionnant les éléments correspondants :

$$
S[i,j] = A[i,j] + B[i,j]
$$

### 🔹 Dictionnaire de données

* `A` : matrice de réels de dimensions n × m
* `B` : matrice de réels de dimensions n × m
* `S` : matrice de réels de dimensions n × m (résultat)
* `n, m` : entiers (dimensions des matrices)
* `i, j` : entiers (indices de boucle)

###  Algorithme

```
Algorithme SommeMatrices
Variables :
    i, j, n, m : Entier
    A, B, S : Tableau[1..10, 1..10] de Réel

Début
    Répéter
        Ecrire("Entrer le nombre de lignes (≤10)")
        Lire(n)
        Ecrire("Entrer le nombre de colonnes (≤10)")
        Lire(m)
    Jusqu'à (n ≤ 10 ET m ≤ 10)

    Pour i allant de 1 à n Faire
        Pour j allant de  1 à m Faire
            Ecrire("Matrcie A. entrer l'element de la" i "eme ligne et" j "eme colonne")
            Lire(A[i,j])
        FinPour
    FinPour

    Pour i allant de 1 à n Faire
        Pour j allant de 1 à m Faire
            Ecrire("Matrcie B. entrer l'element de la" i "eme ligne et" j "eme colonne"));
            Lire(B[i,j]);
        FinPour
    FinPour

    Pour i allant de 1 à n Faire
        Pour j allant de 1 à m Faire
            S[i,j] ← A[i,j] + B[i,j];
        FinPour
    FinPour

    Afficher A;
    Ecrire("+");
    Afficher B;
    Ecrire("=");
    Afficher S;
Fin
```

###  Complexité

* **Temps** : O(n × m)
* **Espace** : O(n × m)

---

## 5 Vérification si un tableau est trié

###  Problème

Vérifier si un tableau d’entiers est trié (ordre croissant ou décroissant).

###  Principe

* On teste si le tableau est **croissant** : `T[i] ≤ T[i+1]` pour tout `i`.
* On teste si le tableau est **décroissant** : `T[i] ≥ T[i+1]` pour tout `i`.
* Si l’un des deux est vrai, le tableau est trié. Sinon, il ne l’est pas.

###  Dictionnaire de données

* `T` : tableau d’entiers de taille n
* `n` : entier positif (taille du tableau, ≤ 1000)
* `i` : entier (indice de boucle)
* `croissant`, `decroissant` : booléens

###  Algorithme

```
Algorithme VerifierTableauTrie
Variables
    i, n : Entier
    T : Tableau[1..1000] d’Entiers
    trie : Entier

Début
    Répéter
        Ecrire("Entrer la taille du tableau")
        Lire(n)
    Jusqu'à n ≤ 1000

    Pour i allant de  1 à n Faire
        Ecrire("Entrer le ", i, " element")
        Lire(T[i])
    FinPour

    trie ← 1
    Pour i allant de 0 à n Faire
        Si T[i] <= T[i+1] Alors
            trie ← 1
        FinSi

        Si T[i] >= T[i+1] Alors
            trie ← 1
        Sinon
            trie ← 0
        FinSi
    FinPour

    Si trie = 1 Alors
        Ecrire("Le tableau est trie")
    Sinon
        Ecrire("Le tableau n'est pas trie")
    FinSi
Fin

###  Complexité

* **Temps** : O(n)
* **Espace** : O(n) 



    
    
  

