#ifndef ADMIN_H
#define ADMIN_H

<<<<<<< HEAD
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
=======
#include <String>
#include "Queue.h"
#include "Project.h"


class Admin {

public:
	Admin();
	Admin(string);
	string getName();
	Projet* getProject(string);

private:
	string name;
	Queue<Project*> myProjects;

}
>>>>>>> origin/master
