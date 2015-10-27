#include "Team.h"

//Default ctor
Team::Team(){ name = "Default Team Name"; }
//team ctor
Team::Team(string n){ name = n ;  }

//Function to print students in the team
void Team::printRoster(){
  cout << "\nRoster for Team '" << name << "':\n";
  for(int i = 0; roster[i] != NULL; i++)
    cout << "  " << i << ") " << *roster[i] << "\n";

}
//Getters and Setters
string Team::getName(){ return name; }
void   Team::setName(string n){ name = n; }

