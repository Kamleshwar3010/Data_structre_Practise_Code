#include<stdio.h>
int hcf_re(int n1, int n2) {
    if (n2 != 0)
        return hcf_re(n2, n1 % n2);
    else
        return n1;
}
int hcf_it(int n1, int n2){
	
        int hcf;
	for(int i=1; i <= n1 && i <= n2; i++)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0){
            hcf = i;
        }
    }
    return hcf;
}
int main(){
	int n1, n2;
	printf("Enter two number-\t");
	scanf("%d %d",&n1,&n2);
	printf("HCF using recursion-\t%d\n",hcf_re(n1,n2));
	printf("HCF using iteration-\t %d",hcf_it(n1,n2));
	return 0;
}