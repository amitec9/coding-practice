 #include<iostream>
 using namespace std;
 
 void fun(int *A,int n)
 {
     for(int i=0;i<n;i++)
     {
         cout<<A[i]<<"\t";
     }
 }
 int main()
 {
     int A[5]={2,4,6,8,10};
     fun(A,5);
 }