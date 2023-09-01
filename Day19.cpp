int findDuplicate(vector<int> &arr) 
{
    int arr_sum=0;
  for (int i = 0; i < arr.size(); i++) {
    arr_sum+=arr[i];
  }
  for(int i=1;i<arr.size();i++){
       arr_sum-=i;
    }	
    return arr_sum;
}
