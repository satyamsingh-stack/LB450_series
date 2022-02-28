int find_median(vector<int> v)
		{
		    int n=v.size();
		    sort(v.begin(),v.end());
		    int median=0;
		    if(n%2!=0)
		        return v[n/2];
		    else{
		        median=(v[n/2 -1]+v[n/2])/2;
		    }
		    return median;
		}
