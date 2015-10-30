#include "Admin.h"

<<<<<<< HEAD
Admin::Admin() {
  name = "Default Admin";
}

Admin::Admin(string n) {
  name = n;
}

string Admin::getName() {
  return name;
}
=======
#include <iostream>
using namespace std;

public:
	Admin();
	Admin(string);
	string getName();
	Projet* getProject(string);

private:
	string name;
	Queue<Project*> myProjects;

Admin::Admin() {
	name = "Unknown";
}

Admin::Admin(string n) {
	name = n;
}

string Admin::getName() {
	//cout << "\n StudentName: " << name << "\n";
	return name;
}

Project* Admin::getProject(string n) {
	for (int i = 0; myProjects[i] != NULL; i++) {
		if (myProjects[i]->getName == n) {
			return myProjects[i];
		}
	}
	return 0;
}
>>>>>>> origin/master
