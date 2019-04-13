#include "graph.hpp"
#include "vertex.hpp"
#include <iostream>

int main(int argc, char** arcv)
{
  Vertex* v1 = new Vertex(1, 2, 3);
  Vertex* v2 = new Vertex(7, 8, 9);
  Graph* graph1 = new Graph(v1); 
  Graph* graph2 = new Graph(v2);

  printf("Graph %p starts and ends with vertices %p and %p\n", graph1, graph1->getStart(), graph1->getEnd());
  printf("Graph %p starts and ends with vertices %p and %p\n", graph2, graph2->getStart(), graph2->getEnd());

  graph2->setEnd(v1);
  printf("Graph %p starts and ends with vertices %p and %p\n", graph2, graph2->getStart(), graph2->getEnd());

}
