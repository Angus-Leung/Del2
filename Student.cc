#include "Student.h"

Student::Student() {
	name = "Unknown";
}

Student::Student(string n) {
	name = n;
}

string getName();
	int getStuAttrs(int);
	int getlookingAttrs(int);

int stuAttrs[NUM_ATTRS];
	int lookingAttrs[NUM_ATTRS];

string Student::getName() {
	//cout << "\n StudentName: " << name << "\n";
	return name;
}

int Student::getStuAttrs(int index) {
	if (stuAttrs[index] != NULL) {
		return stuAttrs[index];
	} 
	return 0;
}

int Student::getLookingAttrs(int index) {
	if (LookingAttrs[index] != NULL) {
		return LookingAttrs[index];
	} 
	return 0;
}