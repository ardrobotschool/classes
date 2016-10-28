#pragma once
#include <iostream>

class Medium{
 public:
  Medium(char title[], int year); //Constructor
  char* getTitle();
  int getYear();
 private:
  char* title;
  int year;
};
