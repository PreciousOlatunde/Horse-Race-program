//race.h - header file for Race class

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <iostream>
#include "horse.h"

class Race{
  private:
    Horse h[5];
    int length;
  public:
    Race();
    void printLane(int horseNum);
    int start();
};

#endif
