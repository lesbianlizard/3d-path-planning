#ifndef DJIKSTRAS2_HPP
#define DJIKSTRAS2_HPP

#include "vertex.hpp"
#include "VertexHolder.hpp"
#include <vector>

class Djikstras
{
	private:
		std::vector <VertexHolder *> vertexArray;
		std::vector <Vertex *> badVerticies;	
	 	std::vector <Vertex *> shortestPath;
		Vertex * start;
		Vertex * end;
		int startIndex;
		int endIndex;
		int totalNumVerticies;
		std::vector<Vertex> holder;
		public:
		void findStartEnd();
		void setBadVerticies();
		void findShortestPath();
		void translateShortestPath();
};
#endif
