// C++ program to demonstrate function 
// declaration outside class 

#include <bits/stdc++.h> 
using namespace std; 
class member 
{ 
	public: 
	string name; 
	int id; 
	
	// printname is not defined inside class definition 
	void printname(); 
	
	// printid is defined inside class definition 
	void printid() 
	{ 
		cout << "id is: " << id<<endl; 
	} 
}; 

// Definition of printname using scope resolution operator :: 
void member::printname() 
{ 
	cout << "name is: " << name; 
} 
int main() { 
	
	member obj1; 
	obj1.name = "abdulah"; 
	obj1.id=15; 
	
	// call printname() 
	obj1.printname(); 
	cout << endl; 
	
	// call printid() 
	obj1.printid(); 
	return 0; 
} 

