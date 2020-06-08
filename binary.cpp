//find the binary search number of array\
//Author :- Amit kumar

#include<iostream>
using namespace std;
int main()
{

    int A[]={2,4,6,8,10,12,14,20,24,25,28,30};
   
		int low=0,high=12,mid;
			mid=low+high/2;
			int key=14;
   
	  while(low<=high)
	   {
		  if(key==A[mid])
		  {
			  cout<<"Found ==  "<<mid+1;
			  return 0; 
			  
		  }
		  
		 else if(key<A[mid])
		  {
			  high=mid-1;
			  
		  }
		   else if(key>A[mid])
		  {
			  low=mid+1;
			  
		  }
	   }
		  cout<<"not found"; 
    
		
   
    

  
}