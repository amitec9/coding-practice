#include<iostream>
using namespace std;
int main()
{
	
	
	int i,j,k;
     for( i=1;i<=5;i++)
    {
        for( k=1;k<=i-1;k++)
            cout<<" ";
        
        for( j=1; j<=(5*2-(2*i-1)); j++)
        {
             if(i==6 || j==1 || j==(5*2-(2*i-1)))
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        
       cout<<endl;
    }
}	