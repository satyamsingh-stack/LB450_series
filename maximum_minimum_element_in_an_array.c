#include<stdio.h>
#include<malloc.h>
int main(){
	int n,*arr,i,max,min;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=arr[0],min=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max)
			max=arr[i];
		else if(arr[i]<min)
			min=arr[i];
	}
	printf("Maximum Number is : %d\nMinimum Element is : %d",max,min);
}
