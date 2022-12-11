#include <iostream>
 using namespace std;
  main() {
    int a[5];
    int b[5];
    int m,k,j;
      for (int i=0;i<5;i++){
	   cout << "Enter Value For First ["<<i<<"] : ";
	    cin >> a[i];
            }
      for (int i=0;i<5;i++){
	   cout << "Enter Value For Second ["<<i<<"] : ";
	    cin >> b[i];
            }
      for (j=0; j<5; j++){
	   m=a[j];
	   a[j]=b[j];
	   b[j]=m;
            }
      for (int i=0;i<5;i++){
	   cout << "Array First Value is: "<<a[i] << "\n";
            }
      for (int i=0;i<5;i++){
	   cout << "Array Second Value is: "<< b[i]<< "\n";
            }
        }

