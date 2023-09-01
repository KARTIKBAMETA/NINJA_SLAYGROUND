#include <bits/stdc++.h> 
int findCase(char ch) {
    if(isupper(ch)){
        return 1;
    }
    if(islower(ch)){
        return 0;
    }
    else{
        return -1;
    }
}