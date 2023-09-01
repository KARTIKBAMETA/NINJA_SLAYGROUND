string lookAndSaySequence(int n) 
{
    string result="1";
    n--;
    while(n>0){
        string ans="";
        for(int i=0;i<result.size();i++){
            char ch=result[i];
            int j=i;
            while (j < result.size() && result[i] == result[j]) {
              j++;
            }
            j--;
            ans += ('0' + (j - i + 1));
            ans += ch;
            i = j;
        }
        result = ans;
        n--;
    }
    return result;
}