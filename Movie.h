#include <iostream>
#include "Medium.h"

class Movie : public Medium{
 public:
  Movie(char* title, char* director, int year, int duration, int rating);
  char* getDirector();
  int getDuration();
  int getRating();
  ~Movie();
 private:
  char* director;
  int duration; //minutes
  int rating;
};
