//
// Created by kinga on 1/14/2021.
//

#ifndef DIJKSTRASALGORITHM_NODE_H
#define DIJKSTRASALGORITHM_NODE_H

#include <string>
#include <vector>

#include "Edge.h"

class Node {
public:
    Node(const std::string &name);

    std::string getName() const;

    void setValue(int v);

    int getValue() const;

    void addEdge(Node *destination, int length);

    const std::vector<Edge>& getEdges() const;

private:
    std::string name;
    int value;
    std::vector<Edge> edges;
};


#endif //DIJKSTRASALGORITHM_NODE_H
