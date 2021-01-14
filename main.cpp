#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;

#include "Node.h"
#include "Edge.h"

#include "NodeSet.h"

int main() {
    Node lund{"Lund"};
    lund.setValue(9);
    Node dalby{"Dalby"};
    Node sandby{"Sodra Sandby"};
    Node hallestad{"Torna Hallestad"};
    Node flyinge{"Flyinge"};
    Node veberod{"Veberod"};

    lund.addEdge(&dalby, 12);
    lund.addEdge(&sandby, 12);
    dalby.addEdge(&veberod, 11);
    dalby.addEdge(&hallestad, 5);
    sandby.addEdge(&lund, 12);
    sandby.addEdge(&flyinge, 4);
    hallestad.addEdge(&veberod, 8);

/*
    cout << "Anslutningar från " << dalby.getName() << "(" << dalby.getValue() << ") :\n";
    for (auto de : dalby.getEdges()) {
        cout << de.getLength() << " to " << de.getDestination()->getName() << endl;
    }
*/
    NodeSet nodeSet{};
    nodeSet.add(&lund);
    nodeSet.add(&dalby);
    nodeSet.add(&sandby);
    nodeSet.add(&hallestad);
    nodeSet.add(&flyinge);
    nodeSet.add(&veberod);

    cout << nodeSet.removeMin()->getValue();
    return 0;
}
