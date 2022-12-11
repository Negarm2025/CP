#include <iostream>
 using namespace std;
   const int a=10;
    main() {
  	 int n[a];
  	 int i,Min;
  	 for (i=0; i<a; i++)
	   {
  		cout << "Please enter value ["<<i<<"]:";
  		 cin >> n[i];
	   }
	Min=n[1]; 
	 for (i=0; i<10; i++)
	 {
		    if (n[i]<Min)
		  {
		    Min=n[i+1];
		  } 
	 } 
	 	cout << "Minimum value is : "<< Min;
	     }	
