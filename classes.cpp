#include <iostream>
#include "VideoGame.h"
#include "Music.h"

using namespace std;

int main(){
  char title[50] = "MyAwesomeTitle";
  Medium *medium = new Medium(title, 1996);
  cout << medium -> getTitle() << endl;

  char anotherTitle[50] = "Tetris";
  char publisher[50] = "SomePublisher";
  VideoGame* videoGame = new VideoGame(anotherTitle, 1964, publisher, 5);
  cout << videoGame->getPublisher() << endl;

  char yetAnotherTitle[50] = "Concerning Hobbits";
  char anotherPublisher[50] = "I don't know.";
  char artist[50] = "Howard Shore";
  Music* music = new Music(yetAnotherTitle, artist, 2001, 127, anotherPublisher);
  cout << "artist:" << music->getArtist() <<" duration: " << music->getDuration()/60 << ":" << music->getDuration() %60 << " year: " << music->getYear();
  
  return 0;
}
