#include <iostream>
using namespace std; 

class User {
   private:
    string name;
    string course;
    int nMec;
    int requestedBooks[3]={0,0,0};

    // Constructors
    User();
    User(string newName, int n);

   public:
    // Setters
    void setName(const string &newName);
    void setnMec(int n);

    // Getters
    string getName();
    int getnMec();
};
