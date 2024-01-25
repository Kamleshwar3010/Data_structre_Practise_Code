#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
static int front=-1;
static int rear=-1;
int creation(int queue[],int n){
 front=rear=-1;
    for(int i=0;i<n;i++){
        if(front==-1 && rear==-1){
        front++;
        rear++;
        scanf("%d",&queue[0]);
        i++;
        }
        if(i >9 ){
            printf("\nQueue is Full !");
            break;
        }
        else{
        scanf("%d",&queue[i]);
        rear++;
        }
    }

 return front;
}

void traversal(int queue[],int front,int rear){
    int i;
    for(i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int enqueue(int queue[],int rear){
    if(rear==9){
        printf("\nQueue is Full !");
    }
    else{
        rear++;
        printf("\nEnter value in queue-\t");
        scanf("%d",&queue[rear]);
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
    int queue[10];
    int n,option;
    printf("How many element you want in Queue-\t");
    scanf("%d",&n);
    front = creation(queue,n);
    label:
    printf("\nPress Enter to Continue");
    getch();
    system("cls");
    printf("\nPress 1 for Traversal\nPress 2 for enqueue\nPress 3 for dequeue\nPress 4 to exit\t");
    scanf("%d",&option);
    switch(option){
    case 1:
    traversal(queue,front,rear);
    goto label;
    break;
    case 2:
    rear = enqueue(queue,rear);
    goto label;
    break;
    case 3:
    front = dequeue(queue,front);
    goto label;
    break;
    case 4:
    exit(0);
    default:
    printf("\nInvalid Option !");
    goto label;
    }
return 0;
}