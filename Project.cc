#include "Project.h"

Project::Project(){
  name = "Default Project Name";
  desc = "This is the default description of the project.";
  owner = "Owner's name";
}

Project::Project(string n, string d, string o){
  name = n;
  desc = d;
  owner = o;
}

//function to print out Team Names in the project
void Project::printTeams(){
  cout << "\nTeams registered in Project:\n";
  for(int i = 0; teamList[i] != NULL; i++)
    cout << "  " << i+1 << ") " << teamList[i]->getName() << "\n";
}

//function to print out student's registered
void Project::printRegistered(){ 
  cout << "\nStudents (strings for now) registered in Project:\n";
  for(int i = 0; registeredList[i] != NULL; i++){
    cout << "  " << i+1 << ") " << *registeredList[i] << "\n";
  }
}

//Getters and Setters
string Project::getName() {  return name;  }
string Project::getDesc() {  return desc;  }
string Project::getOwner(){  return owner; }
void Project::setName(string newname){  name = newname;  }
void Project::setDesc(string newdesc){  desc = newdesc;  }

