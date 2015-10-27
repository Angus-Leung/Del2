#ifndef TEAM_H
#define TEAM_H

#include <string>
#include <iostream>
#include "Queue.h"

using namespace std;

class Team{ 
  public:
    Team();
    Team(string);
    Queue<string*> roster;       //*THIS NEEDS TO BE CHANGED TO BE STUDENTS not strings
    
    void   printRoster();
    string getName();
    void   setName(string);
  
    
  private:
    string        name;

};

#endif
