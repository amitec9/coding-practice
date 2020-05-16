//Program to digit number sum 
//Author :: Amit kumar

#include<iostream>
using namespace std;
int main()
{
	int  num,sum=0,rev,rem;
	cout<<"Enter the  number :: ";
	cin>>num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
		//cout<<rem;
		
	}
	cout<<sum;
	

}