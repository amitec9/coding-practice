//pattern \
//Author :- Amit kumar

#include<iostream>
using namespace std;

void lower(){
    for(int k =0; k<=5;k++)
	{
		for(int a =0; a<k;a++)
		{
			cout<<"*";
		}
		cout<<endl;
		
	}

}
void upper(){
for(int i =0; i<=5;i++)
	{
		for(int j =i; j<5;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		
	}
}

int main()
{
	
upper();
lower();	
    
}