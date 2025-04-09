//tournament.cpp

//libraries and dependencies
#include <iostream>
#include <cstdlib>
#include "horse.h"
#include "race.h"
#include "tournament.h"

//constructors
Tournament::Tournament(){
  Tournament::bet = 10.00;

  for(int i = 0; i < 5; i++){
    Tournament::races[i] = Race();
  } //end of for loop

  balance = 100.00;

} //end of constructor

Tournament::Tournament(double bet){
  Tournament();
  Tournament::bet = bet;

} //end of constructor

//beginning of begin()
void Tournament::begin(){	
  for(int i = 0; i < 5; i++){
    std::cout << "ROUND " << i + 1<< "!" << std::endl;
    std::cout << "You have a balance of $" << balance << ". The bet is $" << bet << "." << std::endl;
    std::cout << "Which horse would you like to bet on? 0, 1, 2, 3 or 4? ";
    int chosenHorse;
    std::cin >> chosenHorse;
    std::cout << std::endl;
    int winner = races[i].start();
    if(winner == chosenHorse){
      balance += bet;
      std::cout << "Your horse has won! Your new balance is $" << balance << ". " << std::endl;
    } else {
      balance = balance - bet;
      std::cout << "Your horse has lost! Your new balance is $" << balance << ". " << std::endl; 
    }//end if
    bet += 5.00;
  } //end of for loop

  std::cout << "Your ending balance is: $" << balance << "! Thank you for playing!" << std::endl;
} //end begin
