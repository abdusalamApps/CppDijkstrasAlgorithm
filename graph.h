//
// Created by kinga on 1/14/2021.
//

#ifndef DIJKSTRASALGORITHM_GRAPH_H
#define DIJKSTRASALGORITHM_GRAPH_H

#include <string>
#include "node.h"

class Graph {
public:
    void addNode(std::string s);

    Node *find(std::string s);

    void resetVals();



private:
};


#endif //DIJKSTRASALGORITHM_GRAPH_H
