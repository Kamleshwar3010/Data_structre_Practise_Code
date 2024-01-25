#include<stdio.h>

int main(){
	int arr[5];
	int n,i=0;
	printf("Enter Size of array-\t");
	scanf("%d",&n);
	printf("Enetr element in array\n");
	while(i<n){
		scanf("%d",&arr[i%5]);
		if(arr[i]==-1){
			break;
		}
		if(i==4){
			printf("Array is full  !\nDo you still want to insert if not then insert - else continue inserting value but that replace old value\n");
		}
	i++;
	}
	for (int i=0;i<5;i++) {
		printf("%d ",arr[i]);
	}
return 0;
}