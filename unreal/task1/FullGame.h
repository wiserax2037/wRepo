#ifndef FULL_GAME_H
#define FULL_GAME_H
#include <string>

using int32 = int;
using FString = std::string;

enum EWordStatus
{
  OK,
  NOT_OK
};

class FullGame {
public:
  FullGame();


  void reset();
  static int32 getMaxTries();
  static int32 getCurrentTry();
  EWordStatus getWordValidity(FString);
  bool isGameWon();
  // TODO asdasdsa

  bool checkValidity(FString) const;


private:
  bool isIsogram(FString) const;
  static bool isLowerCase(FString);
  int32 myCurrTry;
  int32 myMaxTries;
};

#endif
