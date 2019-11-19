#ifndef NODES_RANDOMNODES_H
#define NODES_RANDOMNODES_H

#include <random>
#include <iostream>
#include <chrono>
#include "Nodes.h"

class RandomNodes: public Nodes {
    double* data;
public:
    RandomNodes(double a, double b, unsigned int n) : Nodes(a, b, n) {
        if (n < 2) throw std::range_error("There are at least two nodes: A and B, so N must be more than 2");
        data = new double[n];
        data[0] = A;
        data[N-1] = B;
        for (int i = 2; i < n-1; ++i) {
            double left = data[i-2];
            double right = A + double((B - A)*(i-1))/(N-2);
            std::uniform_real_distribution<double> unif(left, right);
            std::default_random_engine randomEngine(std::chrono::system_clock::to_time_t(std::chrono::system_clock::now()));
            data[i-1] = unif(randomEngine);
        }
    }

    double operator[](int i) const override {
        if((i < 1) and (i > N)) throw std::out_of_range("Index out of range");
        return data[i-1];
    }
};
#endif //NODES_RANDOMNODES_H
