#include<stdio.h>
#include<malloc.h>
int sort(int *arr,int k,int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				arr[i]=(arr[i]^arr[j])^(arr[j]=arr[i]);
			}
		}
	}
	return arr[k-1];
}
int main(){
	int n,*arr,i,k,ans;
	scanf("%d",&n);
	arr=malloc(n*sizeof(sizeof(int)));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	ans=sort(arr,k,n);
	printf("%d",ans);
}
