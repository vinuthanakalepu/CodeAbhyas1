#include<stdio.h>
int main(){
	int a[]={1,2,4,3,6,8};
	int i,len;
	int n=8;
	len = sizeof(a)/sizeof(a[0]);
	for(i=0;i<n-1;i++){
		if(a[i]==n){
			printf("index is %d",i);
		}
	}
	
}
