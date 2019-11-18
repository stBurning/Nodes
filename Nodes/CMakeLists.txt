cmake_minimum_required(VERSION 3.14)
project(Nodes)

set(CMAKE_CXX_STANDARD 17)

add_executable(Nodes main.cpp Nodes.h ChebyshevNodes.h RandomNodes.h ESNodes.h)