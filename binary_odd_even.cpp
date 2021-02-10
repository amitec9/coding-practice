// A simple C++ program to check for 
// even or odd 
#include <iostream> 
using namespace std; 

// Returns true if n is even, else odd 
bool isEven(int n) 
{ 
	// Return true if n/2 does not result 
	// in a float value. 
	return ((n / 2) * 2 == n); 
} 

// Driver code 
int main() 
{ 
	int n = 101; 
	isEven(n) ? cout << "Even" : cout << "Odd"; 
	return 0; 
} 
