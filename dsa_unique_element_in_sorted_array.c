#include<stdio.h>
int main(){
	int n,z;
	printf("How many elements you want-\t");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements in array\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i=i+2){
	    if(arr[i]!=arr[i+1]){
	    	z=i;
	    	break;
	}
	}
	printf("Unique element found at-\t%d",z);
return 0;
}