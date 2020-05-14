#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &r=a;
    cout<<"A result == "<<a<<endl;
    r++;
    cout<<"R Result === "<<r<<endl;
}