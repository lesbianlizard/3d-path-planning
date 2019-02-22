#include <iostream>
#include "../position.hpp"

int main(int argc, char** argv)
{
  Position pos1;
  Position pos2(1, 2, 3);
  Position* pos3 = new Position(10, 200, 341);

  pos1.setx(450000000);
  pos2.sety(120);
  pos3->setz(-273);

  printf("pos1: %g, %g, %g\n", pos1.x(), pos1.y(), pos1.z());
  printf("pos2: %g, %g, %g\n", pos2.x(), pos2.y(), pos2.z());
  printf("pos3: %g, %g, %g\n", pos3->x(), pos3->y(), pos3->z());

  delete pos3;


}
