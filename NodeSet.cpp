//
// Created by kinga on 1/14/2021.
//

#include "NodeSet.h"

NodeSet::NodeSet() {

}

void NodeSet::add(Node *node) {
    nodes.insert(node);
}

bool NodeSet::isEmpty() {
    return nodes.empty();
}

Node *NodeSet::removeMin() {
    if (nodes.empty())
        return nullptr;

}
