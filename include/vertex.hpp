#ifndef VERTEX_HPP
#define VERTEX_HPP
#include <vector>
#include "config.hpp"
#include "position.hpp"

class Vertex
{
  private:
    Position pos;
    std::vector<Vertex*> points_to;
  public:
	FLOAT_TYPE distanceTo(Vertex* vertex);
	Position getPosition();
	void setPosition(Position pos_new);
	std::vector<Vertex*> getVertices();
	void connect(Vertex* vert_new);
	bool compareVerticies(Vertex*,Vertex*);
	Vertex(x_new, y_new, z_new) : pos(x_new, y_new, z_new);
};

#endif
