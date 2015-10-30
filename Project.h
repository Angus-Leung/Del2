#ifndef PROJECT_H
#define PROJECT_H

#include <string>
#include <iostream>
#include "Team.h"
#include "Admin.h"

using namespace std;
class Admin;
class Project{ 
  public:
    Project();
    Project(string, string, Admin*);
    Queue<string*> registeredList;   //*THIS NEEDS TO BE CHANGED TO BE STUDENTS not strings
    Queue<Team*>  teamList;

    string getName();
    string getDesc();
    Admin* getOwner();
    void   printTeams();
    void   printRegistered();
    void   setName(string);
    void   setDesc(string);

    
  private:
    string  name;
    string  desc;
    Admin*  owner;
  
};
#endif
