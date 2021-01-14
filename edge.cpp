//
// Created by kinga on 1/14/2021.
//

#include "edge.h"

Edge::Edge(Node *destination, int length)
        : destination{destination}, length{length} {

}

Node *Edge::getDestination() {
    return destination;
}

int Edge::getLength() const {
    return length;
}
