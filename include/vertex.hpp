#ifndef VERTEX_HPP
#define VERTEX_HPP

#include "position.hpp"
#include <vector>

class Vertex
{
  private:
    Position pos;
    std::vector<Vertex*> points_to;
  public:
    double distanceTo(Vertex* vertex);
    Position* getPosition();
    void setPosition(Position* pos_new);
    std::vector<Vertex*>* pointsTo();
    void connect(Vertex* vert_new);
    bool compareVerticies(Vertex*,Vertex*);
    Vertex(FLOAT_TYPE x_new, FLOAT_TYPE y_new, FLOAT_TYPE z_new) : pos(x_new, y_new, z_new) {}
    Vertex();
};

#endif
