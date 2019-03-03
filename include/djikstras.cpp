#include "djikstras.hpp"

Vertex* Djikstras::getNextUnvisted()
{
	std::vector<Vertex*>verticies = getVerticies();
	for(int i = 0; i < verticies.size(); i++)
	{
		if(uvisited[i] == 0)
		{
			curr_vert = uvisited[i];
			return uvisited[i];
		}
	}		
}

