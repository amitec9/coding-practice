


//pattern \
//Author :- Amit kumar

#include<iostream>
using namespace std;
int main()
{
	int count=1;
	for(int i =1; i<5;i++)
	{
		for(int j =1; j<i;j++)
		{
			if(i==1)
			{
			cout<<count++<<"\t";
			}
			
			
		}
		cout<<endl;
	}
}