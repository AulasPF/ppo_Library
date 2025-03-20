#include <iostream>
using namespace std; 

class Book{
	private:
	int id; 
	string title; 
	string genre; 
	
	public: 
	// Getters
	int getId();
	string getTitle(); 
	string getGenre(); 
	// Setters
	void setId(int id); 
	void setTitle(string t);
	void setGenre(string g); 
	  
	
};
