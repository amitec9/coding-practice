//Program to factor number  
//Author :: Amit kumar

#include<iostream>
using namespace std;
int main()
{
	int  num;
	cout<<"Enter the  number :: ";
	cin>>num;
	for(int count=1;count<=num;count++)
	{
	if(num%count==0)
	{
	cout<<"Result == "<<count<<endl;
	}
		
	}
	
	

}