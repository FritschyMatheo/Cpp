#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H
#include "SearchingAlgorithm.h"

class JumpSearch : public SearchingAlgorithm {
    public:
        int search(const std::vector<int>& vecteur, int recherche) override;
};

#endif