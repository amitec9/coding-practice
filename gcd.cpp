//WAP GCD 
//Author :: Amit kumar

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int  num,sum;
	cout<<"Enter the  two number :: ";
	cin>>num>>sum;
	
	while(num!=sum)
	{
		if(num>sum)
		{
			num=num-sum;
		}
		else if(sum>num)
		{
			sum=sum-num;
		}
		
	}
	cout<<num;
	
	
}