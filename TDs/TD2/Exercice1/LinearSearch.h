#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H
#include "SearchingAlgorithm.h"

class LinearSearch : public SearchingAlgorithm {
    public:
        int search(const std::vector<int>& vecteur, int recherche) override;
};

#endif