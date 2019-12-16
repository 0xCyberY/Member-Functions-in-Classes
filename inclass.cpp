// C++ program to demonstrate 
// accessing of data members 

#include <iostream> 
using namespace std; 
class member
{ 
	// Access specifier 
	public: 

	// Data Members 
	string name; 

	// Member Functions() 
	void printname() 
	{ 
	cout << "name is: " << name<<endl; 
	} 
}; 

int main() { 

	// Declare an object of class geeks 
	member obj1; 

	// accessing data member 
	obj1.name = "abdullah"; 

	// accessing member function 
	obj1.printname(); 
	return 0; 
} 

