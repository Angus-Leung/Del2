#ifndef STUDENT_H
#define STUDENT_H
#define NUM_ATTRS 12

<<<<<<< HEAD
#include <string>
#include <iostream>

using namespace std;

class Student{

  public:
    Student();
    Student(string);
    string getName();
    int getStuAttrs(int);
    int getLookingAttrs(int);
    void setStuAttrs(int, int);
    void setLookingAttrs(int, int);
    string attrNames[NUM_ATTRS];
    void printProfile();
    void editProfile();

  private:
    string name;
    int stuAttrs[NUM_ATTRS];
    int LookingAttrs[NUM_ATTRS];

};

#endif
=======
#include <String>


class Student {

public:
	Student();
	Student(string);
	string getName();
	int getStuAttrs(int);
	int getlookingAttrs(int);

private:
	string name;
	int stuAttrs[NUM_ATTRS];
	int LookingAttrs[NUM_ATTRS];

}
>>>>>>> origin/master
