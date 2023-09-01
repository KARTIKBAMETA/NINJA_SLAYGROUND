#include <bits/stdc++.h> 
vector<vector<int>> fahrenheitToCelsius(int s, int e, int w)
{
	vector<vector<int>> v;
	for(int i=s;i<=e;i+=w){
		int k=((i-32)*5)/9;
		v.push_back({i,k});
	}
	return v;
}
