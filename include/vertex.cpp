#include "vertex.hpp"

bool compareVerticies(Vertex* a, Vertex* b)
{
	if(*a.pos.x() == *b.pos.x() &&
			*a.pos.y() == *b.pos.y() &&
			*a.pos.z() == *b.pos.z()) 
	{
		return true;
	}
	else
		{
			return false;
		}
}
