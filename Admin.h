#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include <iostream>
#include "Project.h"
#include "Queue.h"

using namespace std;

class Project;
class Admin{ 
  public:
    Admin();
    Admin(string);
    Queue<Project*> projectlist;
    
    string getName();
 
    
  private:
    string  name;

};

#endif
