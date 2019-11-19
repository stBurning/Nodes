cmake_minimum_required(VERSION 3.12)
project(Nodes)

set(CMAKE_CXX_STANDARD 14)

add_executable(Nodes Nodes.h ESNodes.h RandomNodes.h ChebyshevNodes.h main.cpp)