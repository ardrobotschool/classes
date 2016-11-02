#include <iostream>
#include "Music.h"

Music::Music(char* newTitle, char* newArtist, int newYear, int newDuration, char* newPublisher) : Medium(newTitle, newYear){
  publisher = newPublisher;
  duration = newDuration;
  artist = newArtist;
}

Music::~Music(){
  delete[] publisher;
  delete[] artist;
}

char* Music::getPublisher(){
  return publisher;
}

int Music::getDuration(){
  return duration;
}

char* Music::getArtist(){
  return artist;
}
