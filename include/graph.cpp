#include "graph.hpp"
#include "config.hpp"
#include "vertex.hpp"

Vertex* Graph::getStart(){
  return this->vertex_start;
}

Vertex* Graph::getEnd(){
  return this->vertex_end;
}

void Graph::setStart(Vertex* new_start){
  this->vertex_start = new_start;
}

void Graph::setEnd(Vertex* new_end){
  this->vertex_end = new_end;
}
