#include<stdio.h>
#include<stdlib.h>
int main(){
	int r, c;
	printf("How many rows you want-\t");
	scanf("%d",&r);
	printf("How many column you want-\t");
	scanf("%d",&c);
	int arr[r][c];
	printf("Enter element-\n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Your array-\n");
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
return 0;
}