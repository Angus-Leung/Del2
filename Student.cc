#include "Student.h"

Student::Student() {
<<<<<<< HEAD
  name = "Default Student";
  for(int i = 0; i < NUM_ATTRS; i++){
    stuAttrs[i] = -1;
    LookingAttrs[i] = -1;
  }
  attrNames[0]  = "Attribute  1";
  attrNames[1]  = "Attribute  2";
  attrNames[2]  = "Attribute  3";
  attrNames[3]  = "Attribute  4";
  attrNames[4]  = "Attribute  5";
  attrNames[5]  = "Attribute  6";;
  attrNames[6]  = "Attribute  7";
  attrNames[7]  = "Attribute  8";
  attrNames[8]  = "Attribute  9";
  attrNames[9]  = "Attribute 10";
  attrNames[10] = "Attribute 11";
  attrNames[11] = "Attribute 12";
}

Student::Student(string n) {
  name = n;
  for(int i = 0; i < NUM_ATTRS; i++){
    stuAttrs[i] = -1;
    LookingAttrs[i] = -1;
  }
  attrNames[0]  = "Attribute  1";
  attrNames[1]  = "Attribute  2";
  attrNames[2]  = "Attribute  3";
  attrNames[3]  = "Attribute  4";
  attrNames[4]  = "Attribute  5";
  attrNames[5]  = "Attribute  6";;
  attrNames[6]  = "Attribute  7";
  attrNames[7]  = "Attribute  8";
  attrNames[8]  = "Attribute  9";
  attrNames[9]  = "Attribute 10";
  attrNames[10] = "Attribute 11";
  attrNames[11] = "Attribute 12";
}

void Student::printProfile(){
  cout << "\n" << name << "'s Profile";
  cout << "\n  My Attribute:           Looking For:";
  for(int i = 0; i < NUM_ATTRS; i++){
    cout << "\n  " << attrNames[i] << ": "  << stuAttrs[i]
   << "           " << attrNames[i] << ": "  << LookingAttrs[i];
  }
}

void Student::editProfile(){
  int value;
  for(int i = 0; i < NUM_ATTRS; i++){
    cout << "\nEditing my attribute: " << attrNames[i];
    cout << "\n  Enter value:";
    cin >> value;
    setStuAttrs(i, value);
  }
  for(int i = 0; i < NUM_ATTRS; i++){
    cout << "Editing partner attribute: " << attrNames[i];
    cout << "\n  Enter value:";
    cin >> value;
    setLookingAttrs(i, value);
  }
}


//GETTERS AND SETTERS

string Student::getName() {
  return name;
}


int Student::getStuAttrs(int index) {
  if (stuAttrs[index] != -1) {
    return stuAttrs[index];
  } 
  return 0;
}

int Student::getLookingAttrs(int index) {
  if (LookingAttrs[index] != -1) {
    return LookingAttrs[index];
  } 
  return 0;
}
void Student::setStuAttrs(int index, int value){
    stuAttrs[index] = value;
}
void Student::setLookingAttrs(int index, int value){
    LookingAttrs[index] = value;
}



=======
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
>>>>>>> origin/master
