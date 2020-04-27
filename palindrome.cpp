//Program to palindrome number  
//Author :: Amit kumar

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int  num,sum=0,rem;
	cout<<"Enter the  number :: ";
	cin>>num;
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum*10+rem;
		

		
	}
	if(temp==sum)
	{
		cout<<"Given no is a palindrome number";
	}
	else
	{
		cout<<"Given no is a not palindrome number";
	}
	
	
}