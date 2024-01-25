#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct queue{
int data;
struct queue *next;
}queue;

queue *creation(int n){
    queue *front,*rear;
    
    front=(queue *)malloc(sizeof(queue));
    scanf("%d",&front->data);
    front->next=NULL;
    rear=front;
    for(int i=1;i<n;i++){
    queue *newnode=(queue *)malloc(sizeof(queue));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    rear->next=newnode;
    rear=rear->next;
    }

    return front;
}

queue *traversal(queue *front){
    queue *curr=front,*rear;
    while(curr != NULL){
        printf("%d ",curr->data);
        if(curr->next==NULL){
            rear=curr;
        }
        curr=curr->next;
    }
    printf("\n");

    return rear;
}

queue *enqueue(queue *rear){
    queue* temp;
    printf("\nEnter Data to add in queue\t");
    temp=(queue *)malloc(sizeof(queue));
    scanf("%d",&temp->data);
    temp->next=NULL;
    rear->next= temp;
    rear = rear->next;

    return rear;
}

queue *dequeue(queue *front){
    queue *temp=front;
    front=front->next;
    free(temp);

    return front;
}

int main(){
    int n,option;
    queue *fr,*re;
    printf("How many element youn want in queue-\t");
    scanf("%d",&n);
    fr=creation(n);
    label:
    printf("\nPress Enter To Continue\n");
    getch();
    system("cls");
    printf("\nPress 1 for traversal\nPress 2 For enqueue\nPress 3 For dequeue\nPress 4 to exit\t");
    scanf("%d",&option);
    switch(option){
        case 1:
        re=traversal(fr);
        goto label;
        break;
        case 2:
        re=enqueue(re);
        goto label;
        break;
        case 3:
        fr=dequeue(fr);
        goto label;
        break;
        case 4:
        exit(0);
        default:
        printf("\nInvalid option !");
        goto label;
    }
}