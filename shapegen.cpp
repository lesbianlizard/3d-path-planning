#include "shapegen.hpp"
#include "vertex.hpp"

#include <cmath>

Graph* ShapeGen::circle(FLOAT_TYPE radius, int resolution, FLOAT_TYPE z_position, Position* center) // Note: the center vertex is used for orientation purposes, but the graph returned by this function will not actually contain the center vertex.
{
  Vertex* vertex_current;
  Vertex* vertex_next;
  Graph* newGraph = new Graph(vertex_current);

  // Define the first point with Theta=0
  vertex_current = new Vertex(center->x() + radius,
                              center->y(),
                              z_position);

  for (int k = 1, k < resolution, k++)
  {
    if (k == resolution - 1)
    {
      // If we are on the last iteration, connect to the first vertex in the circle rather than creating another
      vertex_next = newGraph->getStart();
    }
    else
    {
    vertex_next = new Vertex( center->x() + radius * std::cos(k * 2*M_PI / resolution),
                              center->y() + radius * std::sin(k * 2*M_PI / resolution),
                              z_position);
    }

    vertex_current->link(vertex_next);
    vertex_next->link(vertex_current);
    vertex_current = vertex_next;
  }

  return newGraph;
}

Graph* ShapeGen::cylinder(FLOAT_TYPE radius, FLOAT_TYPE height, int resolution_radial, int resolution_vertical, FLOAT_TYPE z_position, Vertex* origin)
{
  // FIXME: implement this
}
