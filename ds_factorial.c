#include<stdio.h>
int factorial_re(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_re(n - 1);
}
int factorial_it(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}
int main(){
	int num;
	printf("Enter number to find factorial-\t");
	scanf("%d",&num);
	printf("\nFactorial of %d using recursion is%d\n",num,factorial_re(num));
		printf("Factorial of %d using Iteration is%d",num,factorial_it(num));
return 0;
}