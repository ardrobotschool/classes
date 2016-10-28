#include <iostream>
#include "VideoGame.h"
#include "Music.h"
#include "Movie.h"
#include <vector>
#include <cctype>
#include <cstring>

using namespace std;

void add(vector<Medium*> &database);
void search(vector<Medium*> &database);

int main(){
  /*  char title[50] = "MyAwesomeTitle";
  Medium *medium = new Medium(title, 1996);
  cout << medium -> getTitle() << endl;
  */
  char anotherTitle[50] = "Tetris";
  char publisher[50] = "SomePublisher";
  VideoGame* videoGame = new VideoGame(anotherTitle, 1964, publisher, 5);
  //cout << videoGame->getTitle() << endl;
  /*
  char yetAnotherTitle[50] = "Concerning Hobbits";
  char anotherPublisher[50] = "I don't know.";
  char artist[50] = "Howard Shore";
  Music* music = new Music(yetAnotherTitle, artist, 2001, 127, anotherPublisher);
  cout << "artist:" << music->getArtist() <<" duration: " << music->getDuration()/60 << ":" << music->getDuration() %60 << " year: " << music->getYear();

  char title4[50] = "Star Wars";
  char director[50] = "George Lucas";
  Movie* movie = new Movie(title4, director, 1977, 124, 5);
  cout << "year:" << movie->getYear() <<" duration: " << movie->getDuration()/60 << ":" << movie->getDuration() %60 << " director: " << movie->getDirector();*/

  vector<Medium*> database;
  cout << "You may type in \"ADD,\" \"SEARCH,\" and \"QUIT.\"" << endl;
  database.push_back(videoGame);
  for(vector<Medium*>::iterator it = database.begin(); it != database.end(); it++){
    cout << (*it)->getTitle() << endl;
  }

  while(true){
    char input[7];
    cout << "Type in an option: ";
    cin >> input;
    //cin.ignore();
    cout << endl;
    //Convert to lower:
    for(int i = 0; input[i]; i++){
      input[i] = tolower(input[i]);
    }
    if(strcmp(input, "quit") == 0 || strcmp(input, "q") == 0){
	return 0;
      }
    else if(strcmp(input, "add") == 0){
      add(database);
    }
    else if(strcmp(input, "search") == 0){
      search(database);
    }
  }
 
  return 0;
}

void add(vector<Medium*> &database){
  //Prompts user for the media type and the corresponding data; adds the medium to the vector.
  char input[10];
  cout << "Enter the medium type (VIDEOGAME, MUSIC, or MOVIE): ";
  cin >> input;
  cin.ignore();
  //cout << endl;
  //Convert to lower case.
  for(int i = 0; input[i]; i++){
    input[i] = tolower(input[i]);
  }

  if(strcmp(input, "videogame") == 0){
    char *title = new char[25];
    int year;
    char *publisher= new char[25];
    int rating;
    cout << "Enter the following information of your videogame:" << endl;
    cout << "Title: ";
    cin.getline(title, 25);
    //cout << endl;
    cout << "Year: ";
    cin >> year;
    cin.ignore();
    //cout << endl;
    cout << "Publisher: ";
    cin.getline(publisher, 25);
    //cout << endl;
    cout << "Rating: ";
    cin >> rating;
    //cout << endl;

    database.push_back(new VideoGame(title, year, publisher, rating));
  }
}

void search(vector<Medium*> &database){
  //Prompts user for title or year and lists matching items.
  char input;
  cout << "Would you like to search by title or year? (t/y)" << endl;
  cin >> input;
  cout << endl;
  input = tolower(input);
  if(input == 'y'){
    int year;
    cout << "Enter year: ";
    cin >> year;
    cout << endl;
    for(vector<Medium*>::iterator it = database.begin(); it != database.end(); it++){
      if((*it)->getYear() == year){
	cout << (*it)->getTitle() << endl;
      }
    }
  }
}
