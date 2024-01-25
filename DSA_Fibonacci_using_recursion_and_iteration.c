#include<stdio.h>
void fib_rec(int first, int last,int n){
	int next=first+last;
	if(n>0){
		printf("%d ",first);
		fib_rec(last,next,n=n-1);
	}
	}
void fib_it(int first, int last, int n){
	for(int i=0;i<n;i++){
			printf("%d ",first);
			int next=first+last;
			first=last;
			last=next;
	}
	}
int main(){
	int  n;
	printf("How many term you want to print-\t");
	scanf("%d",&n);
	printf("\nFibonacci Using Recursion\n");
	fib_rec(0, 1,n);
	printf("\nFibonacci Using Iteration\n") ;
	fib_it(0, 1,n);
return 0;
}