//Program to prime number  
//Author :: Amit kumar

#include<iostream>
using namespace std;
int main()
{
	int  num,prime=0;
	cout<<"Enter the  number :: ";
	cin>>num;
	for(int count=1;count<=num;count++)
	{
	if(num%count==0)
	{
		prime++;
	
	}
		
	}
	if(prime==2)
	{
		cout<<"Result prime number  "<<endl;
	}
	else
	{
		cout<<"Result not a prime number  "<<endl;
	}
	
	

}