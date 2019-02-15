#ifndef POSITION_HPP
#define POSITION_HPP

#include "config.hpp"

class Position
{
  private:
    FLOAT_TYPE pos_x;
    FLOAT_TYPE pos_y;
    FLOAT_TYPE pos_z;
  public:
    FLOAT_TYPE x();
    FLOAT_TYPE y();
    FLOAT_TYPE z();
    void setx(FLOAT_TYPE x_new);
    void sety(FLOAT_TYPE y_new);
    void setz(FLOAT_TYPE z_new);
};

#endif
