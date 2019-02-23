#ifndef DJIKSTRAS_HPP
#define DJIKSTRAS_HPP

#include "graph.hpp"
#include "config.hpp"
#include "vertex.hpp"

class Djikstras : protected Graph
{
  private:
    std::vector<Vertex *> uvisited;//All unvisited but 'explored' vertices
    Vertex * curr_vert; //pointer to the current vertex of the algorithm
  public:

    Vertex getNextUnvisited();
    void currNeighbors(Vertex* curr_vert);//This will set the weights/parents of all of the n
}
