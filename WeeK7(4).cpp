#include <iostream>

using namespace std;

 main() {
	int n,m,a,b,bmm;
	cout<<"enter first integer value:";
	cin>>n;
	cout<<"enter second integer value:";
	cin>>m;
	a=1;
	while (a<=n){
		while (a<=m){
			a++;
			if (n%a==0 && m%a==0){
				bmm=a;
			}
		}
	}
cout<<"bmm between:"<<n<<"  "<<"and"<<m<<" "<<"is"<<" "<<bmm;
}