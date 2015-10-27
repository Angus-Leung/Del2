#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include <iostream>
#include "Team.h"

using namespace std;

class Project{ 
  public:
    Project();
    Project(string, string, string);
    Queue<string*> registeredList;   //*THIS NEEDS TO BE CHANGED TO BE STUDENTS not strings
    Queue<Team*>  teamList;

    string getName();
    string getDesc();
    string getOwner();
    void   printTeams();
    void   printRegistered();
    void   setName(string);
    void   setDesc(string);

    
  private:
    string  name;
    string  desc;
    string  owner;
  //Admin   owner;            //Commented out until 'Admin' class is implemented
  
};

#endif
