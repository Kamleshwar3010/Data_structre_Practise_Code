#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *prev,*next;
}DLL;

DLL *creation(int n){
    DLL *head=(DLL*)malloc(sizeof(DLL));
    DLL *temp;
    scanf("%d",&head->data);
    head->prev=NULL;
    head->next=NULL;
    temp=head;
   for(int i=1;i<n;i++){
    DLL *newnode=(DLL*)malloc(sizeof(DLL));
    scanf("%d",&newnode->data);
    newnode->prev=temp;
    newnode->next=NULL;
    temp->next=newnode;
    temp=temp->next;
   }

    return head;
}

DLL *insertion_at_beginning(DLL *headptr){
    printf("\nEnter Data To add Node in beginnging\t");
    DLL *temp=(DLL*)malloc(sizeof(DLL));
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=headptr;
    headptr=temp;

    return headptr;
}

DLL *insertion_at_end(DLL *headptr){
    DLL *curr=headptr;
    while(curr->next != NULL){
        curr= curr->next;
    }
    printf("\nEnter Data To add Node in end \t");
    DLL *temp=(DLL*)malloc(sizeof(DLL));
    scanf("%d",&temp->data);
    temp->prev=curr;
    temp->next=NULL;
    curr->next=temp;

return headptr;
}

DLL *insertion_at_middle(DLL *headptr,int pos){
    DLL *curr;
    int i=1;

    if(pos==0 || pos==1){
       return insertion_at_beginning(headptr);
    }
    
    curr=headptr;
    
    while(i < pos-1){
        printf("%d",curr->data);
        curr=curr->next;
        if(curr->next == NULL){
            return insertion_at_end(headptr);
        }
        i++;
    }

    printf("\nEnter Data To add Node %dth position\t",pos);
    DLL *temp=(DLL*)malloc(sizeof(DLL));
    scanf("%d",&temp->data);
    temp->prev=curr;
    temp->next=curr->next;
    curr->next=temp;

return headptr;
}

DLL *deletion_at_beginning(DLL *headptr){
    printf("\nDeleting Node From beginnging\t");
    DLL *temp=headptr;
    headptr=temp->next;
    headptr->prev=NULL;
    free(temp);

    return headptr;
}

DLL *deletion_at_end(DLL *headptr){
    printf("\nDeleting Node From end\t");
    DLL *curr=headptr;
    while(curr->next->next != NULL){
        curr= curr->next;
    }
    DLL *temp= curr->next;
    curr->next=NULL;;
    free(temp);

return headptr;
}

DLL *deletion_at_middle(DLL *headptr,int pos){
    if(pos==0 || pos==1){
       return deletion_at_beginning(headptr);
    }
    DLL *curr=headptr;
    int i=1;
    while(i<pos-1){
        curr=curr->next;
        if(curr->next->next==NULL){
            return deletion_at_end(headptr);
        }
        i++;
    }
    printf("\nDeleting Node From %dth Position\t",pos);
    DLL *temp=curr->next;
    curr->next=temp->next;
    temp->next->prev=curr;
    free(temp);

    return headptr;
}

void traversal(DLL *haedptr){
    DLL *curr = haedptr;
    while(curr != NULL){
        printf("%d ",curr->data);
        curr= curr->next;
    }
    printf("\n");
}

void search(DLL *headptr,int key){
    DLL *curr = headptr;
    int i=1;
    while(curr != NULL){
        if(curr->data==key){
            printf("%d found at %dth Position",curr->data,i);
        }
        curr= curr->next;
        i++;
    }
    printf("\n");
}

DLL *reverse(DLL *headptr) {
    DLL *current = headptr;
    DLL *next = NULL;
    DLL *temp = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = current->prev;
        current->prev = next;
        temp = current; 
        current = next;
    }

    return temp; 
}

int main(){

    int n,option;
    printf("How many element you want in linked list-\t");
    scanf("%d",&n);
    DLL *head=creation(n);
    label:
    printf("\nPress Enter to Continue");
    getch();
    system("cls");
    printf("\nPress 1 for Traversal");
    printf("\nPress 2 for Insertion at begnning\nPress 3 for Insertion at middle\nPress 4 for Insertion at end");
    printf("\nPress 5 for Deletion from begnning\nPress 6 for Deletion from middle\nPress 7 for Deletion from end");
    printf("\nPress 8 to search an element in linked list\nPress 9 to Reverse Linked list");
    printf("\nPress 10 to exit\n");
    scanf("%d",&option);

    switch(option){
    case 1:
    traversal(head);
    goto label;
    break;
    case 2:
    head = insertion_at_beginning(head);
    goto label;
    break;
    case 3:
    printf("\nAt what postion you want to insert element\t");
    scanf("%d",&n);
    head = insertion_at_middle(head,n);
    goto label;
    break;
    case 4:
    head = insertion_at_end(head);
    break;
    case 5: 
    head = deletion_at_beginning(head);
    goto label;
    break;
    case 6:
    printf("\nAt what postion you want to delete element\t");
    scanf("%d",&n);
    head = deletion_at_middle(head,n);
    goto label;
    break;
    case 7:
    head = deletion_at_end(head);
    goto label;
    break;
    case 8:
    printf("\nEnter Value to Search\n");
    scanf("%d",&n);
    search(head,n);
    goto label;
    break;
    case 9:
    head=reverse(head);
    goto label;
    break;
    case 10:
    exit(0);
    default:
    printf("\nInvalid option !\n");
    goto label;
    break;
    }

    return 0;
}