#include <iostream>
#include "Medium.h"

class Music : public Medium{
 public:
  Music(char* title, char* artist, int year, int duration, char* publisher); //Crazy constructor
  char* getPublisher();
  char* getArtist();
  int getDuration();
 private:
  char* publisher;
  int duration; //seconds
  char* artist;
};
