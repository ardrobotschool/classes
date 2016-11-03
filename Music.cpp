#include <iostream>
#include "Music.h"

using namespace std;

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

void Music::displayInfo(){
  cout << title << " (" << year << ") Artist: " << artist << ", Duration: " << duration << " seconds, Publisher: " << publisher << "." << endl;
}
