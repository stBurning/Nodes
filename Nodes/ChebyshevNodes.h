#ifndef NODES_CHEBYSHEVNODES_H
#define NODES_CHEBYSHEVNODES_H

#define _USE_MATH_DEFINES
#include <cmath>
#include "Nodes.h"

/**Chebyshev nodes are specific real algebraic numbers,
 * namely the roots of the Chebyshev polynomials of the first kind
 * @formula x_k = cos((2k-1)/2n*pi), k=1,...,n    **/
class ChebyshevNodes: public Nodes {
public:
    ChebyshevNodes(double a, double b, unsigned int n) : Nodes(a, b, n) {}
public:
    double operator[](int i) const override {
        //for go through all the nodes in loop, index must go through 1,..,N
        return 0.5*(A + B) + 0.5*(B - A)*cos(double(2*i - 1)*M_PI/(2*N));
    }
};


#endif //NODES_CHEBYSHEVNODES_H
