J'ai ecrit le prgramme qui calcule la somme de deux matrices et celui qui verifie si un tableau est trie


DOSSIER ALGORITHMIQUE
-LA SOMME DE MATRICES:
- Probleme : Calculer la somme de deux matrices A et B de dimensions m x n.
- Principe : La somme de deux matrices est une matrices de même format et  est calculée en additionnant les éléments correspondants au même indice des deux matrices(les a[i][j] +b[i][j]).
- Dictionnaire de données :
  A : matrice de dimensions m x n
  B : matrice de dimensions m x n
  S : matrice de dimensions m x n, résultat de la somme de A et B
  m, n, i, j : entier
 
- Algorithme :
Algorithme SommeMatrices
Variables :i, j, n, m : Entier;
           A, B, S : Tableau [1..10, 1..10] de Réel;

Début
    Répéter
        Ecrire("Entrer le nombre de lignes");
        Lire(n);
        Ecrire("Entrer le nombre de colonnes");
        Lire(m);
    Jusqu'à (n > 10 ET m > 10)

    Pour i allant de 1 à n Faire
        Pour j allant de 1 à m Faire
            Ecrire("Matrice A : Entrer l'élément de la ", i, "ème ligne et ", j, "ème colonne");
            Lire(A[i,j]);
        FinPour
    FinPour

    Pour i allant de 1 à n Faire
        Pour j allant de  1 à m Faire
            Ecrire("Matrice B : Entrer l'élément de la ", i, "ème ligne et ", j, "ème colonne");
            Lire(B[i,j]);
        FinPour
    FinPour

    Pour i allant de 1 à n Faire
        Pour j allant de 1 à m Faire
            S[i,j] ← A[i,j] + B[i,j];
        FinPour
    FinPour

    Pour i allant de 1 à n Faire
        Pour j allantde  1 à m Faire
            Ecrire(A[i,j]);
        FinPour
        
    FinPour

    Ecrire("+");
    Pour i allant de 1 à n Faire
        Pour j allant de 1 à m Faire
            Ecrire(B[i,j]);
        FinPour
        
    FinPour

    Ecrire("=");
    Pour i allant de 1 à n Faire
        Pour j allantd de 1 à m Faire
            Ecrire(S[i,j]);
        FinPour
    FinPour
Fin

- Complexite :
  En temp: O(n*m)
  En espace:O(n*m)


 
  
  5- VERIFICATION SI UN TABLEAU EST TRIE
-Problème
Vérifier si un tableau d’entiers est trié peut importe l'ordre.
-Principe : On parcourt le tableau en comparant chaque élément avec le suivant :
   -Si tous les éléments respectent la relation T[i] ≤ T[i+1], alors le tableau est trié en ordre croissant.
   -Si tous les éléments respectent la relation T[i] ≥ T[i+1], alors le tableau est trié en ordre décroissant.
   -Si aucune de ces conditions n’est satisfaite pour l’ensemble du tableau, alors le tableau n’est pas trié.

-Dictionnaire de données
T : tableau d’entiers de taille n
n : entier positif représentant la taille du tableau
i : indice de parcours du tableau
trie : booléen qui vaut Vrai si le tableau est trié, Faux sinon

-ALGORITHME
Algorithme VerifierTableauTrie
Variables
    i, n : Entier;
    T : Tableau[1..1000] d’Entiers;
    trie : Entier;

Debut
    Repeter
        Ecrire("Entrer la taille du tableau");
        Lire(n);
    Jusqu'a n ≤ 1000

    Pour i ← 1 à n Faire
        Ecrire("Entrer le ", i, "eme element");
        Lire(T[i]);
    FinPour

    trie ← 1;
    Pour i ← 0 à n Faire
        Si T[i] <= T[i+1] Alors
            trie ← 1;
        FinSi

        Si T[i] >= T[i+1] Alors
            trie ← 1;
        Sinon
            trie ← 0;
        FinSi
    FinPour

    Si trie = 1 Alors
        Ecrire("Le tableau est trie");
    Sinon
        Ecrire("Le tableau n'est pas trie");
    FinSi
Fin

-Complexite:
Temps : O(n) 
Espace : O(n+2)
