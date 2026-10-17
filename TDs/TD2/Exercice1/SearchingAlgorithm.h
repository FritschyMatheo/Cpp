#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORITHM_H
#include <iostream>
#include <vector>

/* 
Pour Jumpsearch et Binarysearch il faut trier le tableau avant d'appliquer la recherche
Calcul de pas : sqrt(n), trier tableau puis on cherche dans le tableau 
par le pas jusqu'à ce que la valeur soit supérieure à ce qu'on cherche et après
 on fait une recherche linéaire 
*/

// Binary search : Chercher valeur du milieu ((0 + len(tableau)) / 2) et comparer avec valeur recherchée

class SearchingAlgorithm {
    protected:
        int numberComparisons;
        static int totalComparisons, totalSearch;
        static double averageComparisons;
    public:
        SearchingAlgorithm();
        virtual ~SearchingAlgorithm() = default;

        virtual int search(const std::vector<int>& vecteur, int recherche)=0;
        void displaySearchResults(std::ostream& os, int result, int target);
};

#endif