#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
    vector<int> ans;
    int y=1;
    int count=0;
    while(count!=x){
        int a=(3*y)+2;
        if(a%4==0){
            y++;
        }else{
            ans.push_back(a);
            y++;
            count++;
        }

    }
    return ans;
}
