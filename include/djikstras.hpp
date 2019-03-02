#ifndef DJIKSTRAS_HPP
#define DJIKSTRAS_HPP

#include "graph.hpp"
#include "config.hpp"
#include "vertex.hpp"

class Djikstras : protected Graph
{
  private:
    std::vector<Vertex *> uvisited;//All unvisited but 'explored' vertices
    std::vector<Vertex *> visited;
    Vertex * curr_vert; //pointer to the current vertex of the algorithm
    Vertex getNextUnvisited();
    void currNeighbors(Vertex* curr_vert);//This will add neighbors to the unvisited array
    void removeUnivisited(Vertex* vert);
    void addUnivisited(Vertex* vert);
    void addVisited(Vertex* vert);
  public:

    std::vector<Vertex *> getPath(Vertex * vertex_start, Vertex * vertex_end);
    std::vector<Vertex *> getPath(std::vector<Vertex *>); // Overloaded function to get path for many waypoints
}
