#include <iostream>
#include "Medium.h"

Medium(char* newTitle, int newYear){
  title = newTitle;
  year = newYear;
}
char* Medium::getTitle(){
  return title;
}

int Medium::getYear{
  return year;
}
