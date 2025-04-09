//horse.cpp - cpp file for Horse class

#include <iostream>
#include "horse.h"

//null parameter constructor
Horse::Horse(){
  Horse::position = 0;

} //end constructor

void Horse::advance(){
  position++;

}//end advance()

int Horse::getPosition(){
  return position;

} //end getPosition()
