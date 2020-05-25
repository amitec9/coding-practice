//Program to amstrong number  
//Author :: Amit kumar

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int  num,sum=0,rev,rem;
	cout<<"Enter the  number :: ";
	cin>>num;
	int temp=num;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem*rem*rem;
		
		//cout<<rem;
		
	}
	if(temp==sum)
	{
		cout<<"It is a amstrong number";
	}
	else
	{
		cout<<"It is a not amstrong number";
	}
	
}
	
