#include "vertex.hpp"

class Graph
{
  private:
    Vertex* vertex_start;
    Vertex* vertex_end;
  public:
    Vertex* getStart();
    Vertex* getEnd();
    void setStart(Vertex* new_start);
    void setEnd(Vertex* new_end);
}
