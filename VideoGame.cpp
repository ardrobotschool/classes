#include <iostream>
#include "VideoGame.h"

using namespace std;

VideoGame::VideoGame(char* newTitle, int newYear, char* newPublisher, int newRating) : Medium(newTitle, newYear){
  publisher = newPublisher;
  rating = newRating;
}

VideoGame::~VideoGame(){
  delete[] publisher;
}

char* VideoGame::getPublisher(){
  return publisher;
}

int VideoGame::getRating(){
  return rating;
}

void VideoGame::displayInfo(){
  cout << title << " (" << year << ")" << " Publisher: " << publisher << ", Rating: "<< rating << "." << endl;
}
