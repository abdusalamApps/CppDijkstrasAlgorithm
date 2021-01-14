//
// Created by kinga on 1/14/2021.
//

#include "node.h"

Node::Node(const std::string &name): name{name}, value{INT_MAX} {

}

std::string Node::getName() const {
    return name;
}

void Node::setValue(int v) {
    value = v;
}

int Node::getValue() const {
    return value;
}

void Node::addEdge(Node *destination, int length) {
    edges.emplace_back(destination, length);
}

const std::vector<Edge> &Node::getEdges() const {
    return edges;
}


