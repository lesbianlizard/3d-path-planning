#ifndef VERTEX_HOLDER
#define VERTEX_HOLDER

#include "vector.hpp"

class VertexHolder
{
	public:
	vertex * pointer;
	int value = 1000000;
	bool visited = false;
	vertex * last_vertex;
};

#endif
