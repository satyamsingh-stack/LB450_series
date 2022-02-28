string isSubset(int arr1[], int arr2[], int n, int m) {
    int count=0;
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j])
                count++;
        }
    }
    if(m==count)
        return "Yes";
    else
        return "No";
}
