//WAP function overriding
//Author - Amit Kumar

#include<iostream>

using namespace std;
class Your;
class My
{
	private: int a;
	protected: int b;
	public: int c;
	friend Your;
	
};
class Your
{
	public:
	My t;
void fun()
{
	
	
	t.a=10;
	t.b=20;
	t.c=30;
}
};


int main()
{
	
	
}