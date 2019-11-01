/* This is the console exec that makes use if the FullGame class
 * This acts as the view in a MVC patter, and is responsible for all 
 * user interaction.
 */



#include <iostream>
#include <string>
//#include <stdexcept>
#include "FullGame.h"


using int32 = int;
using FText = std::string;


struct BaC
{
  int32 bulls = 0;
  int32 cows = 0;
};



FText printIntro()
{
  constexpr int32 WORLD_LENGTH = 5;
  FText guess;
  getline(std::cin, guess);
  std::cout << "That's how work getline: " << guess << std::endl;
  return guess;
}

int32 main()
{
  FText guess = printIntro();

  FullGame Game;
  //TODO smth

  BaC parameters {3, 5};
  parameters.bulls = 67;

  std::cout << std::round(std::sqrt(parameters.bulls * parameters.cows)) << std::endl;
  std::cout << guess[0] << std::endl;

  std::cout << "--------------------------------" << std::endl;

  std::cout << guess.length() << std::endl;

  std::cout << "--------------SWITCH TEST--------------" << std::endl;

  EWordStatus status = NOT_OK;
  while (status != OK)
  {
     std::cout << "please enter word with big length" << std::endl;
     std::cin >> guess;
     status = Game.getWordValidity(guess);
     switch(status)
     {
       case OK:
         std::cout << "OK" << std::endl;
         break;
       case NOT_OK:
         std::cout << "SORRY, TRY AGAIN" << std::endl;
         break;
       default:
         throw std::invalid_argument("Error reading word occured.");
     }
  }

  std::cout << "--------------MAP TEST--------------" << std::endl;

  while (!Game.checkValidity(guess))
  {
    std::cout << "Please enter word: " << std::endl;
    std::cin >> guess;
    std::cout << Game.checkValidity(guess) << std::endl;
  }


  return 0;
}