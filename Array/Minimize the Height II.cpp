int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int largest=arr[n-1]-k;
        int smallest=arr[0]+k;
        int ma,mi;
        for(int i=0;i<n-1;i++){
            ma=max(largest,arr[i]+k);
            mi=min(smallest,arr[i+1]-k);
            if(mi<0)
                continue;
            ans=min(ans,ma-mi);
        }
        return ans;
    }
