#include<stdio.h>
int main(){
	int count=0,max=0;
	int a[]={1,2,1,1,1,2};
	int i,n;
	n = sizeof(a)/sizeof(a[0]);
	for(i=0;i<n-1;i++){
		if(a[i]==1){
			count++;
			
		}
		else{
			count=0;
		}
		if(count>max){
			max=count;
		}
		
	}
	printf("%d",count);
}
