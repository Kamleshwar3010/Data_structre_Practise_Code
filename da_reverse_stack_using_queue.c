#include<stdio.h>
static int top=-1;
static int front=-1;
static int rear=-1;

int creation (int stack[],int size){
	printf("Enter element in stack-\n") ;
	for(int i=0;i<size;i++){
		scanf("%d",&stack[i]);
		top++;
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
	stack[top]=0;
	top--;
	}
	else{
		printf("Stack is empty\n");
	}
	return top;
}

int enqueue(int queue[],int rear,int item){
    if(rear==9){
        printf("\nQueue is Full !");
    }
    else{
        if(front ==-1 && rear ==-1){
            front++;
        }
        rear++;
        queue[rear]=item;
    }

return rear;
}

int dequeue(int queue[],int front){
    if(front==-1){
        printf("\nQueue is Empty !");
    }
    else{
        queue[front]=-1;
        front++;
    }

return front;
}

int main(){
    int stack[100];
    int queue[100];
	int n;
	printf("\nHow many elemnet you want in stack-\t");
	scanf("%d", &n);
	top=creation(stack,n);
    traversal(stack,top);
    for(int i=0;i<n;i++){
        rear = enqueue(queue,rear,stack[top]);
        top=pop(stack,top);
    }
    for(int i=0;i<n;i++){
        top = push(stack,top,queue[front]);
        front = dequeue(queue,front);
    }
    traversal(stack,top);
}