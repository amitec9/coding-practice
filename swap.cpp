//function: 
//Author :- Amit kumar

#include<iostream>
#include<cstring>
using namespace std;
/*int swap(int *a, // portocala// int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}*/

int swap(int &a, int &b)//function formal
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}


int main()
{
	int a=10,b=20;
	//swap(&a,&b);
	swap(a,b); //actural
	cout<<a<<" "<<b<<endl;
	
}