/* pattern */



#include<iostream>
using namespace std;
int main()
{
	  for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=5-i;k++)
            cout<<" ";
        
        for(int j=1; j<=2*i-1; j++)
        {
            
            cout<<j;
        }
        
       cout<<endl;
    }
	
	int i,j,k;
     for( i=1;i<=5;i++)
    {
        for( k=1;k<=i-1;k++)
            cout<<" ";
        
        for( j=1; j<=(5*2-(2*i-1)); j++)
        {
            
            cout<<j;
        }
        
       cout<<endl;
    }
	
}