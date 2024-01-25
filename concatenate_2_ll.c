#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *creation(int size)
{
	int item;
	struct node *head, *temp, *new_node;
	printf("Entet the value for head node-\t");
	scanf("%d", &item);
	head = (struct node *)malloc(sizeof(struct node));
	head->data = item;
	head->next = NULL;
	temp = head;

	printf("Entet the value for other node-\n");
	for (int i = 1; i < size; i++)
	{
		new_node = (struct node *)malloc(sizeof(struct node));
		scanf("%d", &item);
		new_node->data = item;
		new_node->next = NULL;
		temp->next = new_node;
		temp = temp->next;
	}

	return head;
}
 void traversal(struct node* head){
 	struct node* curr;
 	curr=head;
 	while(curr!= NULL){
 		printf("%d\t",curr->data);
 		curr=curr->next;
 	}
 }
struct node *concate(struct node *head1, struct node* head2){
	struct node* curr;
	curr=head1;
	while(curr!= NULL){
		if(curr->next==NULL){
		curr->next=head2;
		break;
	}
	else{
	curr=curr->next;
	}
	}
	return head1;
}

int main()
{
	struct node *N,*M;
	N = creation(5);
	printf("list-1\n");
	traversal(N);
	M=creation(3);
	traversal(M);
	printf("\nlist-2\n");
	N=concate(N,M);
	printf("\nconcatinated list\n");
	traversal(N);
}