#include <iostream>
#include "Project.h"
#include "Team.h"
#include "Queue.h"
#include "Admin.h"
#include "Student.h"

using namespace std;

int main()
{
  Queue<Project*>  ProjectList;  //Make a ProjectList (as a Queue)


  //Make 3 Admins
  Admin* a1 = new Admin("Dusan Rozman"); 
  Admin* a2 = new Admin("Angus Leung");
  Admin* a3 = new Admin("Roman Chametka");

  //Make 3 new Projects
  Project* pro1 = new Project("My Project","This is a project that I made", a1);
  Project* pro2 = new Project("Angus' Project","This is a project that Angus made", a2);
  Project* pro3 = new Project("Roman's Project","This is a project that Roman made", a3);

  //add each project to project list
  ProjectList += pro1;
  ProjectList += pro2;
  ProjectList += pro3;
  
  //Display the 3 projects in the list (using index [] notation).
  cout << "\nChecking what's in ProjectList after adding to it\n"; 
  cout << "  Name: " << ProjectList[0]->getName() << "\n";
  cout << "  Desc: " << ProjectList[0]->getDesc() << "\n";
  cout << "  Owner: " << ProjectList[0]->getOwner()->getName() << "\n";

  cout << "\n  Name: " << ProjectList[1]->getName() << "\n";
  cout << "  Desc: " << ProjectList[1]->getDesc() << "\n";
  cout << "  Owner: " << ProjectList[1]->getOwner()->getName() << "\n";

  cout << "\n  Name: " << ProjectList[2]->getName() << "\n";
  cout << "  Desc: " << ProjectList[2]->getDesc() << "\n";
  cout << "  Owner: " << ProjectList[2]->getOwner()->getName() << "\n";

  //Remove project 1 from the list (for testing)
  ProjectList -= pro1;

  //Print what is in index Project[0] (to check if it was removed).
  cout << "\nChecking what's in ProjectList[0] after delete\n";
  cout << "  Name: " << ProjectList[0]->getName() << "\n";
  cout << "  Desc: " << ProjectList[0]->getDesc() << "\n";
  cout << "  Owner: " << ProjectList[0]->getOwner() << "\n";

  //Check if you can getWithName() works
  cout << "\nChecking if getWithName(\"Roman's Project\") works\n";
  Project* tempProject = ProjectList.getWithName("Roman's Project");
  cout << "  Name: " << tempProject->getName() << "\n";
  cout << "  Desc: " << tempProject->getDesc() << "\n";
  cout << "  Owner: " << tempProject->getOwner()->getName() << "\n";


  //Creating  a few teams to test
  Team* t1 = new Team("Team 1");
  Team* t2 = new Team("Team 2");
  Team* t3 = new Team("Team 3");

  //adding teams to project 1
  pro1->teamList += t1;
  pro1->teamList += t2;
  pro1->teamList += t3;
  
  //print teams
  pro1->printTeams();
  
  //adding students (strings for now) in project 1
  string* a = new string("Alice");
  string* b = new string("Bob");
  string* c = new string("Cindy");
  pro1->registeredList += a;
  pro1->registeredList += b;
  pro1->registeredList += c;

  //Print out students registered for project
  pro1->printRegistered();

  //Add students to team 1;
  t1->roster += a;
  t1->roster += b;
  t1->roster += c;

  //Print out team roster for t1
  t1->printRoster();

  

  return 0;
}
