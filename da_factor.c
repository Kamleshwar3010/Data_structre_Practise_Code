#include<stdio.h>
#include <stdio.h>

void factors_re(int num, int divisor) {
    if (divisor > num / 2)
        return;
     if (num % divisor == 0) {
        printf("%d ",divisor);
    }
      factors_re(num, divisor + 1);
}
void factors_it(int num) {
    printf("Factors of %d are: 1 ", num);
    
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("\nFactor using recursion\n");
     printf("Factors of %d are: 1 ", number);
    factors_re(number, 2);
   printf("\nFactor using Iteration\n");
   factors_it(number);
    return 0;
}
