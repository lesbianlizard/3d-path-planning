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

    Position() : x_pos(0), y_pos(0), z_pos(0) {}
    Position(FLOAT_TYPE x_new, FLOAT_TYPE y_new, FLOAT_TYPE z_new) : x_pos(x_new), y_pos(y_new), z_pos(z_new) {}
};

#endif
