#include <iostream>
#include "VideoGame.h"

using namespace std;

int main(){
  char title[50] = "MyAwesomeTitle";
  Medium *medium = new Medium(title, 1996);
  cout << medium -> getTitle() << endl;

  char anotherTitle[50] = "Tetris";
  char publisher[50] = "SomePublisher";
  VideoGame* videoGame = new VideoGame(anotherTitle, 1964, publisher, 5);
  cout << videoGame->getPublisher() << endl;
  return 0;
}
