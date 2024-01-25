#include<stdio.h>
int* selection_sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i] >=a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	return a;
}
int* insertion_sort(int a[],int n){
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]<=a[j]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	return a;
}
int* bubble_sort(int a[],int n){
	int swap=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swap++;
			}
		}
			if(swap==0){
				return a;
			}
	}
	return a;
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int main(){
	int n,option;
	printf("How many elements are in array-\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in array\n");
	for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	printf("\nOrignal Array\n");
	print(a, n);
	printf("\nPress 1 for selection sort\nPress 2 for bubble sort\nPress 3 for insertions sort\n");
scanf("%d",&option);
printf("\nSorted Array\n");
switch(option){
	case 1:
	selection_sort(a, n);
	print(a, n);
	break;
	case 2:
	bubble_sort(a, n);
	print(a, n);
	break;
	case 3:
	insertion_sort(a, n);
	print(a, n);
	break;
	default:
	printf("Invalid option");
}
return 0;
}