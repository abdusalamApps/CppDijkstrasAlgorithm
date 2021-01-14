//
// Created by kinga on 1/14/2021.
//

#ifndef DIJKSTRASALGORITHM_NODESET_H
#define DIJKSTRAS \
ALGORITHM_NODESET_H
#include <set>
#include "Node.h"

class NodeSet {
public:
    /** Skapar en tom mängd av noder. */
    NodeSet();

    /** Lägger till noden node till mängden,
     * om mängden inte redan innehåller en nod med samma namn. */
    void add(Node *node);

    /** Returnerar true om mängden noder är tom. */
    bool isEmpty();

    /** Väljer ut den nod som har lägst värde och returnerar den.
     * Den returnerade noden tas bort ur mängden.
     * Om mängden är tom returneras null. */
    Node *removeMin();

private:
    std::set<Node*> nodes;
};


#endif //DIJKSTRASALGORITHM_NODESET_H
