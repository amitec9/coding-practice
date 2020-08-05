//function: 
//Author :- Amit kumar

#include<iostream>
#include<cstring>
using namespace std;

class Rectangle
{
	public:
	int length;
	int breadth;
	
	int area()
	{
		return length*breadth;
	}
	int perimeter()
	{
		return 2*(length+breadth);
	}
	
};
	

int main()
{
	Rectangle r1;
	//r1.length=10;
	//r1.breadth=5;
	Rectangle *ptr;
	ptr=&r1;
	ptr->length=10;
	ptr->breadth=5;
	//cout<<"Area is " <<r1.area()<<endl;
	//cout<<"Perimeter is " <<r1.perimeter()<<endl;
	
	cout<<"Area is " <<ptr->area()<<endl;
	cout<<"Perimeter is " <<ptr->perimeter()<<endl;
	
}