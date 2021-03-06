#include <iostream>
#include "Medium.h"

class VideoGame : public Medium{
 public:
  VideoGame(char* newTitle, int newYear, char* newPublisher, int newRating); //Constructor
  ~VideoGame();
  char* getPublisher();
  int getRating();
  void displayInfo();
 private:
  char* publisher;
  int rating;
};
