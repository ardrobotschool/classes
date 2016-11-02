#include <iostream>
#include "VideoGame.h"

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
