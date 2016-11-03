#include <iostream>
#include "Medium.h"

Medium::Medium(char newTitle[], int newYear){
  title = newTitle;
  year = newYear;
}
Medium::~Medium(){
  delete[] title;
}
char* Medium::getTitle(){
  return title;
}

int Medium::getYear(){
  return year;
}

void Medium::displayInfo(){
  return;
}
