#include<stdio.h>
#include<malloc.h>
int *sort(int *arr,int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j])
				arr[i]=(arr[i]^arr[j])^(arr[j]=arr[i]);
		}
	}
	for(i=0;i<n;i++){
		return arr[i];
	}
}
int main(){
	int n,*arr,i,mid;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	mid=n/2;
	sort(arr,n);
	printf("%d",arr[mid]);
	free(arr);
	return 0;
}
