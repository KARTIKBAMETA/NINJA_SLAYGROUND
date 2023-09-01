#include <bits/stdc++.h> 

void printPattern(int n) {
	cin>>n;
	int m;
	cin>>m;
	m=n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m-1;j++){
			cout<<" ";
		}
	for(int k=1;k<=2*i-1;k++){
		cout<<"*";
	}
	m--;
	cout<<"\n";
	}
}