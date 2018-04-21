cmake_minimum_required(VERSION 3.9)
project(Dijkstra)

set(CMAKE_CXX_STANDARD 11)



add_executable(Dijkstra main.cpp Graph.cpp Graph.h node.cpp node.h)