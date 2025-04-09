//tournament.h
//Header file for the Tournament object

//header guard
#ifndef TOURNAMENT_H
#define TOURNAMENT_H

//libraries and dependencies
#include <iostream>
#include <cstdlib>
#include "horse.h"
#include "race.h"

//class declaration
class Tournament{
  private:
    double balance;
    double bet;
    Race races[5];

  public:
    Tournament();
    Tournament(double bet);
    void begin();

}; //end of class

#endif
