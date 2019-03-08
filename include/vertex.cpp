#include "vertex.hpp"
#include "position.hpp"
#include "config.hpp"
#include <cmath>

bool Vertex::compareVerticies(Vertex* a,Vertex* b)
{
	if(a->pos.x() == b->pos.x() &&
			a->pos.y() == b->pos.y() &&
			a->pos.z() == b->pos.z())
	{
		return true;
	}
	else
		{
			return false;
		}
}

FLOAT_TYPE Vertex::distanceTo(Vertex* vertex)
{
 return std::sqrt( std::pow((this->pos.x() - vertex->pos.x()), 2.0) +
                   std::pow((this->pos.y() - vertex->pos.y()), 2.0) + 
                   std::pow((this->pos.z() - vertex->pos.z()), 2.0) );
}

Position* Vertex::getPosition()
{
  return &(this->pos);
}

void Vertex::setPosition(Position* pos_new)
{
  this->pos.setx(pos_new->x());
  this->pos.sety(pos_new->y());
  this->pos.setz(pos_new->z());
}

std::vector<Vertex*>* Vertex::pointsTo()
{
  return &(this->points_to);
}

void Vertex::connect(Vertex* vert_new)
{
  this->points_to.push_back(vert_new);
}

Vertex::Vertex()
{
  this->pos.setx(0);
  this->pos.sety(0);
  this->pos.setz(0);
}
