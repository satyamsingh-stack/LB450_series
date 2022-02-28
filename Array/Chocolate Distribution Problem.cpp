 long long findMinDiff(vector<long long> arr, long long n, long long m){
        long long x=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i+m-1<n;i++){
            int res=arr[i+m-1]-arr[i];
            if(res<x)
                x=res;
        }
        return x;
    }   
