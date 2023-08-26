#include<stdio.h>
int binary(int a[],int x,int low,int high){
	while(low<=high){
		int mid = low +(high-low)/2;
		if(a[mid]==x)
			return mid;
		
		if(a[mid]<x)
			low =mid+1;
		
		else
			high =mid-1;
	}
		
	return -1;
	
}
int main(void){
	int a[] ={3,4,5,6,7,8,9};
	int n= sizeof(a)/sizeof(a[0]);
	int x=4;
	int result = binary(a,x,0,n-1);
	if(result == -1){
		printf("not found");
	}
	else{
		printf("element found at index %d",result);
	}
}
