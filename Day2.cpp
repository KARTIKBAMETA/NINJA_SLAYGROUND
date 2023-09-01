string compareIfElse(int a, int b) {
	// Write your code here
	cin>>a>>b;
	if(a>b){
		return "greater";
	}
	else if(a<b){
		return "smaller";
	}
	else{
		return "equal";
	}

}
