#include <iostream>
#include <string>
#include "Project.h"
#include "Team.h"
#include "Queue.h"
#include "Admin.h"
#include "Student.h"

#include <iostream>

using namespace std;

class CupidSys{ 
  public:
    CupidSys();
     
    int acctType;
    string username;
    Queue<Student*> studentlist;
    Queue<Project*> projectList;
    Queue<Admin*>   adminList;
    
    void login(string*, int*);
    void adminMenu(Admin*);
    void stuMenu(Student*);

};

//Default ctor
CupidSys::CupidSys(){
  acctType = -1;
  username = "";

}


//function to login
void CupidSys::login(string* username, int* acctType){

  cout << "Username: ";
  cin >> *username;
  cout << "Account type (Admin=1, Stu=2): ";
  cin >> *acctType;
}

//function for adminMenu
void CupidSys::adminMenu(Admin* user){
  int option;
  cout << "\nAdmin Menu:\n";
  cout << "1) Create New Project\n";
  cout << "2) View My Projects\n";
  cout << "Enter Option: ";
  cin >> option;
  cout << "\n";
}

//function for stuMenu
void CupidSys::stuMenu(Student* user){
  int option;
  cout << "\nStudent Menu:\n";
  cout << "1) View Profile\n";
  cout << "2) Edit Profile\n";
  cout << "Enter Option: ";
  cin >> option;
  switch (option){
    case 1:
      user->printProfile();
      break;
    case 2:
      user->editProfile();
      break;
    default:
      break;
  }
  cout << "\n";
}

//MAIN FUNCTION:
int main()
{ 
 
  CupidSys cupid;
  cupid.login(&(cupid.username), &(cupid.acctType));
  cout << "Username is: " << cupid.username << "\n";
  cout << "Account is: " << cupid.acctType << "\n";
  
  while(1){
    //Admin control
    if(cupid.acctType == 1){
      Admin* user = new Admin(cupid.username);
      cupid.adminMenu(user);
    }
    //Student control
    else{
      Student* user = new Student(cupid.username);
      cupid.stuMenu(user);
    }
  }

  return 0;
}
