#ifndef NODES_NODES_H
#define NODES_NODES_H

/**@author Ustinov Konstantin
 * Base-Class for nodes in interpolation**/
class Nodes {
protected:
    double A; // Left border of interval
    double B; // Right border of interval
    unsigned int N;// Quantity of nodes
public:
    Nodes(double a, double b, unsigned int n) : A(a), B(b), N(n) {}
    double getA() const {
        return A;
    }
    double getB() const {
        return B;
    }
    unsigned int getN() const {
        return N;
    }
    virtual double operator[](int i) const = 0;
};


#endif //NODES_NODES_H
