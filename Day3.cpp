#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int eve=0,odd=0;
	while(n>0){
		int i=n%10;
		if(i%2==0){
			eve=eve+i;
		}
		else{
			odd=odd+i;
		}
		n=n/10;
	}
	cout<<eve<<" "<<odd;
return 0;
}
