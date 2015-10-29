#ifndef STUDENT_H
#define STUDENT_H
#define NUM_ATTRS 12

#include <String>
#include <iostream>
#include "Queue.h"

using namespace std;

class Student {

public:
	Student();
	Student(string);
	string getName();
	int *getStuAttrs(int);
	int *getlookingAttrs(int);

private:
	string name;
	int *stuAttrs[NUM_ATTRS];
	int *lookingAttrs[NUM_ATTRS];

}