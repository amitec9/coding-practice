//Program to sum of naural number  
//Author :: Amit kumar

#include<iostream>
using namespace std;
int main()
{
	int  sum=0,num;
	cout<<"Enter the  number :: ";
	cin>>num;
	for(int count=1;count<=num;count++)
	{
		sum=sum+count;
	}
	cout<<sum;
	

}