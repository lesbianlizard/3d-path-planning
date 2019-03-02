#ifndef SHAPEGEN_HPP
#define SHAPEGEN_HPP

#include "config.hpp"
#include "graph.hpp"
#include "vertex.hpp"


class ShapeGen
{
  public:
    Graph* circle(FLOAT_TYPE radius, int resolution, FLOAT_TYPE z_position, Position* center);
    Graph* cylinder(FLOAT_TYPE radius, FLOAT_TYPE height, int resolution_radial, int resolution_vertical, FLOAT_TYPE z_position, Position* center);
}

#endif
