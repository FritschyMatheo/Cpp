#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H
#include "SearchingAlgorithm.h"

class BinarySearch : public SearchingAlgorithm {
    public:
        int search(const std::vector<int>& vecteur, int recherche) override;
};

#endif