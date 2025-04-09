//race.cpp - cpp file for the Race class

#include <iostream>
#include "horse.h"
#include "race.h"

//null parameter constructor
Race::Race(){
  for(int i = 0; i < 5; i++){
    h[i] = Horse();
  }//end for loop

  length = 15;
}

void Race::printLane(int horseNum){
  int position = h[horseNum].getPosition();
  for (int i = 0; i < length; i++){
    if (i == position){
      std::cout << horseNum;
    } else {
      std::cout << ".";
    }//end if
  }//end for loop
  std::cout << std::endl;
} //end printLane

int Race::start(){
  bool keepGoing = true;
  int winner;

  while(keepGoing){
    for(int i = 0; i < 5; i++){
      int move = rand() % 2;
      if (move == 1){
        h[i].advance();
      } //end if
      printLane(i);
      if(h[i].getPosition() >= length){
        winner = i;
        keepGoing = false;
      } //end if
    } //end for loop
    std::cout << std::endl;
  } //end while

  std::cout << "Horse " << winner << " wins!" << std::endl;
  return winner;
} //end start()


