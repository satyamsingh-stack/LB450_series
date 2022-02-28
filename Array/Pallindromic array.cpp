bool check(int x){
        int r,s=0,k=x;
        while(x){
            r=x%10;
            s=s*10+r;
            x=x/10;
        }
        if(k==s)
            return true;
        else
            return false;
    }
    int PalinArray(int arr[], int n)
    {
    	for(int i=0;i<n;i++){
    	    if(check(arr[i])==false)
    	        return 0;
    	}
    	return 1;
    }
