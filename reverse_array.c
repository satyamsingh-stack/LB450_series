#include<stdio.h>
#include<malloc.h>
int main(){
	int n,*arr,i,beg,end;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	beg=0,end=n-1;
	while(beg<=end){
		arr[beg]=(arr[beg]^arr[end])^(arr[end]=arr[beg]);
		beg++;
		end--;
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
