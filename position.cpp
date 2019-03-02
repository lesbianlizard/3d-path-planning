#include "position.hpp"
#include "config.hpp"

FLOAT_TYPE Position::x(){
  return this->x;
}

FLOAT_TYPE Position::y(){
  return this->y;
}

FLOAT_TYPE Position::z(){
  return this->z;
}

FLOAT_TYPE Position::setX(FLOAT_TYPE x_new){
  this->x = x_new;
}

FLOAT_TYPE Position::setX(FLOAT_TYPE y_new){
  this->y = y_new;
}

FLOAT_TYPE Position::setX(FLOAT_TYPE z_new){
  this->z = z_new;
}
