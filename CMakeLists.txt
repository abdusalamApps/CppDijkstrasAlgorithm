cmake_minimum_required(VERSION 3.17)
project(DijkstrasAlgorithm)

set(CMAKE_CXX_STANDARD 20)

add_executable(DijkstrasAlgorithm main.cpp
        node.cpp node.h
        edge.cpp edge.h
        node_set.cpp node_set.h
        graph.cpp graph.h
        dijkstra.cpp dijkstra.h)

add_executable(test_nodeset test_nodeset.cpp
        node.cpp node.h
        edge.cpp edge.h
        node_set.cpp node_set.h)

add_executable(test_graph_nofile test_graph_nofile.cpp
        node.cpp node.h
        edge.cpp edge.h
        node_set.cpp node_set.h
        graph.cpp graph.h)

add_executable(test_graph_small test_graph_small.cpp
        node.cpp node.h
        edge.cpp edge.h
        node_set.cpp node_set.h
        graph.cpp graph.h)

add_executable(test_dijkstra test_dijkstra.cpp
        node.cpp node.h
        edge.cpp edge.h
        node_set.cpp node_set.h
        graph.cpp graph.h
        dijkstra.cpp dijkstra.h)