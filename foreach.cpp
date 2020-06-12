//use foreach loop to display all emelents from Array;
//Author :- Amit kumar

#include<iostream>
using namespace std;

void Display()
{
    int A[]={2,4,6,8,10};
    
    for(int x:A)
    {
        cout<<++x<<endl;
		//cout<<x<<endl;
    }
    
    
}
int main()
{
   Display(); 
}