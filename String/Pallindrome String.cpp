class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int flag=1;
	    int n=S.length();
	    for(int i=0;i<n;i++){
	        if(S[i]!=S[n-i-1]){
	            flag=0;
	            break;
	        }
	    }
	    if(flag)
	        return 1;
	    else
            return 0;	    
	}

};
