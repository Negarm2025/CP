#include <iostream>
 using namespace std;
  main() {
  	int array_size=10;
  	int arr[array_size] , Max, Min;
  	float sum,average;
  	    Max=arr[0]; 
	  	 for ( int i=0; i<array_size;i++) 
		   {	
  		    cout << "Enter value for ["<< i << "] :";
  		    cin >> arr[i];
  		    if (arr[i]>Max)
		  {
   			Max=arr[i];
		  }
	    Min=arr[0];	
	     for (int i=0; i<array_size;i++) 
		   {
		    if (arr[i]<Min)
		  {
		    Min=arr[i];
		  } 
		   }   
	      }
	    cout << "Your Enter Data(s) :";
	    for (int i=0; i<array_size;i++) 
		   {
	  	cout << arr[i];
	  	if (i<array_size-1) 
		  {
	  		cout << " , ";
		  }
	       }
	    sum=Min+Max;
	    average=sum/2;
	cout << "\n"<< "Maximum value is : "<< Max;
	cout << "\n"<< "Minimum value is : "<< Min;
	cout << "\n"<<"average:"<<average;
}

