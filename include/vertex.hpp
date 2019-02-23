#ifndef VERTEX_HPP
#define VERTEX_HPP

#include <vector>

class Vertex
{
  private:
    Position pos;
    std::vector<Vertex*> points_to;
  public:
    double distanceTo(Vertex* vertex);

    Position getPosition();
    void setPosition(Position pos_new);
    std::vector<Vertex*> getVerticies();
    void connect(Vertex* vert_new);

    Vertex(x_new, y_new, z_new) : pos(x_new, y_new, z_new);
}

#endif
