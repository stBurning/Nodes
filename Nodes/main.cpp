#include <iostream>
#include "ESNodes.h"
#include "Nodes.h"
#include "ChebyshevNodes.h"
#include "RandomNodes.h"

using namespace std;
void print(const Nodes &knots){
    for (int i = 1; i <= knots.getN(); i++){
        cout<<knots[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    RandomNodes rnodes(-1,1,7);
    ChebyshevNodes cnodes(0,5,10);
    ESNodes esNodes(-4,4,9);
    cout<<"ChebyshevNodes: ";
    print(cnodes);
    cout<<"RandomNodes: ";
    print(rnodes);
    cout<<"RandomNodes: ";
    print(rnodes);
    cout<<"ESNodes: ";
    print(esNodes);
    return 0;
}