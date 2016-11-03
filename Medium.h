#pragma once
#include <iostream>

class Medium{
 public:
  Medium(char title[], int year); //Constructor
  char* getTitle();
  int getYear();
  virtual ~Medium();
  virtual void displayInfo();
 protected:
  char* title;
  int year;
};
