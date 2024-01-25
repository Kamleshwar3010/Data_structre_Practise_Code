#include<stdio.h>
#include<conio.h>
static int top=-1;
int creation (int stack[],int size){
	printf("Enter element in stack-\n") ;
	for(int i=0;i<size;i++){
		scanf("%d",&stack[i]);
		top++;
	}
	return top;
}
int push(int stack[], int top){
	int item;
	if(top==100){
		printf("StackOverflow! ");
	}
		else{
			top++;
	printf("Enter element in stack-\t");
	scanf("%d",&item);
	stack[top]=item;
		}
	return top;
}
int isempty(int top){
	if(top==-1){
		return 1;}
		else{
			return 0;
		}
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

void peek(int stack[]){
		if(isempty(top)==0){
	printf("Top element of stack is %d",stack[top]);
	}
	else{
		printf("stack is empty") ;
	}
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
		int n, option;
	printf("\nHow many elemnet you want in stack-\t");
	scanf("%d", &n);
	 top=creation(stack,n);

label:
	printf("\nPress Enter to continue");
	getch();
// system("cls");
	printf("\nPress 1 for traversal\n Press 2 to perform push operation\n Press 3 to perform pop operation\n Press 4 to check is stack empty or not\n Press 5 to perform peek operation\nPress 6 to exit\n");
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		traversal(stack,top);
		goto label;
		break;
	case 2:
		top = push(stack,top);
		goto label;
		break;
	case 3:
		top = pop(stack, top);
		goto label;
		break;
	case 4:
	if(isempty(top)==1){
		printf("Stack is empty\n");
	}
	else{
		peek(stack);
	}
		goto label;
		break;
	case 5:
		peek(stack);
		goto label;
		break;
		case 6:
		//exit(0);
	default:
		printf(" select valid option");
		goto label;
	}
return 0;
}