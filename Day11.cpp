#include <bits/stdc++.h> 
vector < vector < int > > numberPattern(int n) {
  vector<vector<int>>pattern(n,vector<int>(n,-1));
  int count=0;
  for(int i=0;i<n;i++){
    for(int j=n-i-1;j<n;j++){
      pattern[i][j]=(count%9+1);
      count++;
    }
  }
  return pattern;
}
