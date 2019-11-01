#define TMap std::map
#define uint32 unsigned int
#include <map>
#include <utility>
#include "FullGame.h"
#include <iostream>

using int32 = int;


FullGame::FullGame()
{
  myCurrTry = 0;
  myMaxTries = 10;
}

void FullGame::reset()
{
  
}

int32 FullGame::getMaxTries()
{
  return 0;
}

int32 FullGame::getCurrentTry()
{
  return 0;
}

EWordStatus FullGame::getWordValidity(const FString asd)
{
  if (asd.length() > 6)
  {
  return OK;
  }
  return NOT_OK;
}

bool FullGame::isGameWon()
{
  return false;
}

bool FullGame::checkValidity(FString inp) const
{
  return isIsogram(std::move(inp));
}

bool FullGame::isIsogram(FString inp) const
{

  if(!isLowerCase(inp))
  {
    std::cout << "Please enter the lower case word" << std::endl;
    return false;
  }

  TMap<char, bool> wordsMap;
  for (auto Letter : inp)
  {
    if (wordsMap[Letter])
    {
      return false;
    }
    wordsMap[Letter] = true;
  }
  return true;
}

bool FullGame::isLowerCase(FString inp)
{
  if (inp.length() <= 1) { return true; }

  for (auto Letter : inp)
  {
    if (!islower(Letter)) { return false; }
  }
  return true;
}



