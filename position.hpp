#ifndef POSITION_HPP
#define POSITION_HPP

#include "config.hpp"

class Position
{
  private:
    FLOAT_TYPE x_pos;
    FLOAT_TYPE y_pos;
    FLOAT_TYPE z_pos;
  public:
    FLOAT_TYPE x();
    FLOAT_TYPE y();
    FLOAT_TYPE z();
    void setx(FLOAT_TYPE x_new);
    void sety(FLOAT_TYPE y_new);
    void setz(FLOAT_TYPE z_new);

    Position(x_new, y_new, z_new) : x_pos(x_new), y_pos(y_new), z_pos(z_new) {}
};

#endif
