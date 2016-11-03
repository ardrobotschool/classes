#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie(char* newTitle, char* newDirector, int newYear, int newDuration, int newRating) : Medium(newTitle, newYear){
  director = newDirector;
  duration = newDuration;
  rating = newRating;
}

Movie::~Movie(){
  delete[] director;
}

char* Movie::getDirector(){
  return director;
}

int Movie::getDuration(){
  return duration;
}

int Movie::getRating(){
  return rating;
}

void Movie::displayInfo(){
  cout << title << " (" << year << ") Director: " << director << ", Duration: " << duration << " minutes, Rating: " << rating << "." << endl;
}
