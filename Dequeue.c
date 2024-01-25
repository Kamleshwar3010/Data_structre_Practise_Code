#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct Dequeue{
int data;
struct Dequeue *next;
}Dequeue;

Dequeue *creation(int n){
    Dequeue *front,*rear;
    
    front=(Dequeue *)malloc(sizeof(Dequeue));
    scanf("%d",&front->data);
    front->next=NULL;
    rear=front;
    for(int i=1;i<n;i++){
    Dequeue *newnode=(Dequeue *)malloc(sizeof(Dequeue));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    rear->next=newnode;
    rear=rear->next;
    }

    return front;
}

Dequeue *traversal(Dequeue *front){
    Dequeue *curr=front,*rear;
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

Dequeue *enqueue_rear(Dequeue *rear){
    Dequeue* temp;
    printf("\nEnter Data to add in Dequeue\t");
    temp=(Dequeue *)malloc(sizeof(Dequeue));
    scanf("%d",&temp->data);
    temp->next=NULL;
    rear->next= temp;
    rear = rear->next;

    return rear;
}

Dequeue *enqueue_front(Dequeue *front){
    Dequeue* temp;
    printf("\nEnter Data to add in Dequeue\t");
    temp=(Dequeue *)malloc(sizeof(Dequeue));
    scanf("%d",&temp->data);
    temp->next=front;
    front = temp;

    return front;
}

Dequeue *dequeue_front(Dequeue *front){
    Dequeue *temp=front;
    front=front->next;
    free(temp);

    return front;
}

Dequeue *dequeue_rear(Dequeue *front){
    Dequeue *temp,*rear;
    temp=front;
    while(temp -> next -> next != NULL){
    temp=temp->next;
    }
    rear=temp;
    rear->next = NULL;
    free(temp->next);

    return rear;
}

int main(){
    int n,option;
    Dequeue *fr,*re;
    printf("How many element youn want in Dequeue-\t");
    scanf("%d",&n);
    fr=creation(n);
    label:
    printf("\nPress Enter To Continue\n");
    getch();
    system("cls");
    printf("\nPress 1 for traversal\nPress 2 For enqueue from back\nPress 3 For enqueue from front\nPress 4 For dequeue from front\nPress 5 For dequeue from back\nPress 7 to exit\t");
    scanf("%d",&option);
    switch(option){
        case 1:
        re=traversal(fr);
        goto label;
        break;
        case 2:
        re=enqueue_rear(re);
        goto label;
        break;
        case 3:
        fr=enqueue_front(fr);
        goto label;
        break;
        case 4:
        fr=dequeue_front(fr);
        goto label;
        break;
        case 5:
        re=dequeue_rear(fr);
        goto label;
        break;
        case 6:
        exit(0);
        default:
        printf("\nInvalid option !");
    }
}