cmake_minimum_required(VERSION 3.17)
project(DijkstrasAlgorithm)

set(CMAKE_CXX_STANDARD 20)

add_executable(DijkstrasAlgorithm main.cpp Node.cpp Node.h Edge.cpp Edge.h NodeSet.cpp NodeSet.h)
add_executable(test_nodeset test_nodeset.cpp Node.cpp Node.h Edge.cpp Edge.h NodeSet.cpp NodeSet.h)