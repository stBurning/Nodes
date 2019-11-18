#include <iostream>
#include "ChebyshevNodes.h"
#include "ESNodes.h"
#include "RandomNodes.h"

int main() {
    RandomNodes cnodes(-1,1,11);
    for (int i = 1; i <= cnodes.getN(); ++i) {
        std::cout<<cnodes[i]<<" ";
    }
    return 0;
}