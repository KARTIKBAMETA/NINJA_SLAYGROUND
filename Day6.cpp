bool checkArmstrong(int n){
	int ori=n;
	int d=0,sum=0;
	while(ori>0)
	{
		ori=ori/10;
		d++;
	}
	ori=n;
	while(n>0)
	{
		int last=n%10;
		sum+=pow(last,d);
		n/=10;
	}
	if(sum==ori)
		return true;
	else 
        return false;
}
