#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int maxa=INT_MIN;
	int mina=INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i]>maxa){
			maxa=arr[i];
		}
		if(arr[i]<mina){
			mina=arr[i];
		}
	}
	return maxa+mina;
}