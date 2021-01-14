//
// Created by kinga on 1/14/2021.
//
#include <algorithm>

#include "NodeSet.h"

NodeSet::NodeSet() {

}

void NodeSet::add(Node *node) {
    auto it = std::find(nodes.begin(), nodes.end(), node);
    if (it == nodes.end()) {
        nodes.push_back(node);
    }
}

bool NodeSet::isEmpty() {
    return nodes.empty();
}

Node *NodeSet::removeMin() {
    if (nodes.empty())
        return nullptr;
    auto it = std::min_element(nodes.begin(), nodes.end(), [](const Node *n1, Node *n2) {
        return n1->getValue() < n2->getValue();
    });
    nodes.erase(it);
    return *it;
}
