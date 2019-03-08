#ifndef VERTEX_HPP
#define VERTEX_HPP

#include <vector>
#include "config.hpp"

class Vertex
{
  private:
    Position pos;
    FLOAT_TYPE weight;//Weight of the node in the graph for djikstras
    Vertex * parentVertex;
    std::vector<Vertex*> points_to;
  public:
    double distanceTo(Vertex* vertex);

    FLOAT_TYPE getWeight();
    Position getPosition();
    void setPosition(Position pos_new);
    std::vector<Vertex*> getVerticies();
    void addVertex(Vertex* vert_new);
    std::vector<Vertex*> setNeighbors();//returns neighbors that were set

}

#endif
