//find the max number of array\
//Author :- Amit kumar

#include<iostream>
using namespace std;

void Display()
{
    int A[]={2,4,12,8,10};
   
	int max=A[0];
   
	   for(int i=0;i<=5;i++)
		   
    {
	if(A[i]>max)
	{
	max=A[i];
    
	}
		
    }
	cout<<"Result ==  "<<max<<endl;
    
}
int main()
{
   Display(); 
}