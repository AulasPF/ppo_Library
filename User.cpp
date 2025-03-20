#include "User.h"

// Constructors
User::User() : name(""), nMec(0) {}

User::User(string newName, int n) : name(newName), nMec(n){};

void User::setName(const string &newName) { name = newName; };
void User::setnMec(int n) { nMec = n; };

// Getters
string User::getName() { return name; };
int User::getnMec() { return nMec; };
