#ifndef NODES_RANDOMNODES_H
#define NODES_RANDOMNODES_H

#include <random>
#include <chrono>
#include "Nodes.h"

class RandomNodes: public Nodes {
public:
    RandomNodes(double a, double b, unsigned int n) : Nodes(a, b, n) {}

    double operator[](int i) const override {

        if ((i == 1) || (i == N)) return A + double((B - A)*(i-1))/(N-1);
        double right = A + double((B - A)*(i-1))/(N-2);
        double left = A + double((B - A)*(i-2))/(N-2);
        std::uniform_real_distribution<double> unif(left, right);
        std::default_random_engine randomEngine(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()));
        return unif(randomEngine);



    }
};


#endif //NODES_RANDOMNODES_H
