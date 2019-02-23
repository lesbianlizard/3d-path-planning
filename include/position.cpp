#include "position.hpp"

FLOAT_TYPE Position::x(){
  return this->x_pos;
}

FLOAT_TYPE Position::y(){
  return this->y_pos;
}

FLOAT_TYPE Position::z(){
  return this->z_pos;
}

void Position::setx(FLOAT_TYPE x_new){
  this->x_pos = x_new;
}

void Position::sety(FLOAT_TYPE y_new){
  this->y_pos = y_new;
}

void Position::setz(FLOAT_TYPE z_new){
  this->z_pos = z_new;
}
