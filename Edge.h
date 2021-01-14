//
// Created by kinga on 1/14/2021.
//

#ifndef DIJKSTRASALGORITHM_EDGE_H
#define DIJKSTRASALGORITHM_EDGE_H

class Node;

class Edge {
public:
    Edge(Node *destination, int length);

    Node *getDestination();

    int getLength() const;

private:
    int length;
    Node *destination;

};


#endif //DIJKSTRASALGORITHM_EDGE_H
