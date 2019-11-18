#ifndef NODES_ESNODES_H
#define NODES_ESNODES_H

#include "Nodes.h"

/**Equally spaced nodes in interpolation
 * @formula: x[k] = B - (B - A)*k/(N-1) **/

class ESNodes: public Nodes {
public:
    ESNodes(double a, double b, unsigned int n): Nodes(a,b,n){};

    double operator[](int i) const override {
        return A + double((B - A)*(i-1))/(N-1);
    }
};


#endif //NODES_ESNODES_H
