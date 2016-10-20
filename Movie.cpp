#include <iostream>
#include "Movie.h"

Movie::Movie(char* newTitle, char* newDirector, int newYear, int newDuration, int newRating) : Medium(newTitle, newYear){
  director = newDirector;
  duration = newDuration;
  rating = newRating;
}

char* Movie::get
