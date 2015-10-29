#ifndef ADMIN_H
#define ADMIN_H

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