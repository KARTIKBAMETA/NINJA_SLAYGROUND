int removeDuplicates(vector<int> &arr, int n) {
	int i=0,j=1;
	while(j<n){
		if(arr[i]!=arr[j]){
			i++;
			arr[i]=arr[j];
		}
		j++;
	}
	return i+1;
}