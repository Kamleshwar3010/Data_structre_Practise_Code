#include<stdio.h>
static int top=-1;
static int top1=-1;
int creation (int stack[],int size){
	printf("Enter element in stack-\n") ;
	for(int i=0;i<size;i++){
		scanf("%d",&stack[i]);
		top++;
	}
	return top;
}
int push(int stack[], int top,int item){
	if(top==100){
		printf("StackOverflow! ");
	}
		else{
	top++;
stack[top]=item;
		}
	return top;
}
int pop(int stack[],int top){
	if(top != -1){
	stack[top]=NULL;
	top--;
	}
	else{
		printf("Stack is empty\n");
	}
	return top;
}
void traversal (int stack[],int top){
	printf("Element in stack\t");
	for(int i=top;i>-1;i--){
		printf("%d\t",stack[i]);
	}
	printf("\n");
}
int main(){
	int stack[100];
	int stack1[100];
	int n;
	printf("\nHow many elemnet you want in stack-\t");
	scanf("%d", &n);
	 top=creation(stack,n);
	 int temp;
	 traversal (stack, top);
	 for(int i=0;i<n;i++){
	 	temp=stack[top];
	 	//printf("%d ",temp);
	 	top1=push(stack1, top1,temp);
	 	top=pop(stack,top);
	 }
	 traversal (stack1, top1);
}