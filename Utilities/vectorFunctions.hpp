#ifndef VECTORFUNCTIONS_HPP
#define VECTORFUNCTIONS_HPP

#include "../config.hpp"
#include "../vertex.hpp"
#include <vector>
#include <algorithm>

bool containsVertex(std::vector<Vertex *> vertArray,Vertex * vert){
  //Checks to see if the vertex array contains a specific vertex
  return std::find(vertArray.begin(), veryArray.end(), vert) != vector.end();
}
