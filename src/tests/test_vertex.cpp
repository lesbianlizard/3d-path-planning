#include "vertex.hpp"
#include <iostream>

int main (int argc, char** argv)
{
  printf("Beginning test for Vertex class\n");
  Vertex vertex1; 
  Vertex* vertex2 = new Vertex(44.04, -123.13, 500);
  Vertex* vertex3 = new Vertex(50, -130, 250);
  Vertex* vertex4 = new Vertex(50, -130, 250);

  printf("vertex1 contains a position of %g, %g, %g\n", vertex1.getPosition()->x(), vertex1.getPosition()->y(), vertex1.getPosition()->z());
  printf("vertex2 contains a position of %g, %g, %g\n", vertex2->getPosition()->x(), vertex2->getPosition()->y(), vertex2->getPosition()->z());
  printf("The distance from vertex1 to vertex2 is %g.\n", vertex1.distanceTo(vertex2));
  printf("Giving vertex1 a new position\n");
  Position* pos_new = new Position(44.045, -123.16, 400);
  vertex1.setPosition(pos_new);
  printf("vertex1 contains a position of %g, %g, %g\n", vertex1.getPosition()->x(), vertex1.getPosition()->y(), vertex1.getPosition()->z());
  printf("The distance from vertex1 to vertex2 is %g.\n", vertex1.distanceTo(vertex2));
  printf("\nConnecting some verticies together\n");

  vertex1.connect(vertex2);
  vertex2->connect(&vertex1);

  vertex2->connect(vertex3);
  vertex3->connect(vertex2);

  vertex1.connect(vertex3);

  std::vector<Vertex*> verts;
  verts.push_back(&vertex1);
  verts.push_back(vertex2);
  verts.push_back(vertex3);
  verts.push_back(vertex4);
  int v_size = 0;

  printf("%i verticies added to test array\n", verts.size());

  for (int i = 0; i < verts.size(); i++)
  {
    v_size = verts.at(i)->pointsTo()->size();
    printf("vertex %p points to %i verticies\n", verts.at(i), v_size);

    if (v_size > 0)
    {
      for (int j = 0; j < v_size; j++)
      {
        printf("vertex %p points to vertex %p\n", verts.at(i), verts.at(i)->pointsTo()->at(j));
      }
    }
  }

  printf("\nComparing vertices\n");

  if (vertex2->compareVerticies(vertex2, vertex3))
  {
    printf("vertex2 and vertex3 are the same\n");
  }
  else
  {
    printf("vertex2 and vertex3 differ\n");
  }
  
  if (vertex3->compareVerticies(vertex4, vertex3))
  {
    printf("vertex2 and vertex3 are the same\n");
  }
  else
  {
    printf("vertex2 and vertex3 differ\n");
  }
  

  delete pos_new;
  delete vertex2;
}
