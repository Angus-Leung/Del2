#include "Admin.h"

Admin::Admin() {
  name = "Default Admin";
}

Admin::Admin(string n) {
  name = n;
}

string Admin::getName() {
  return name;
}

