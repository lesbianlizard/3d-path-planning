#ifndef VERTEX_HOLDER
#define VERTEX_HOLDER

#include "vertex.hpp"

class VertexHolder
{
	public:
	Vertex * pointer;
	int value = 1000000;
	bool visited = false;
	Vertex * last_vertex;
};

#endif
