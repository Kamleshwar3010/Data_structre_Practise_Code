#include <stdio.h>
#include <stdlib.h>
struct treenode
{
	int data;
	struct treenode *left;
	struct treenode *right;
};
typedef struct treenode tree;
tree *creation()
{
	tree *node;
	int data;
	scanf("%d", &data);
	if (data == -1)
	{
		return NULL;
	}
	node = (tree *)malloc(sizeof(tree));
	node->data = data;
	printf("Enter data for %d left node\n", data);
	node->left = creation();
	printf("Enter data for %d right node\n", data);
	node->right = creation();
	return node;
}
void preorder(tree *root)
{
	if (root != NULL)
	{
		printf("%d ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(tree *root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d ", root->data);
	}
}
void inorder(tree *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}
int main()
{
	tree *root;
	printf("Enter Data for root node\n");
	root = creation();
	printf("Preorder Traversal\n");
	preorder(root);
	printf("Postorder Traversal\n");
	postorder(root);
	printf("Inorder Traversal\n");
	inorder(root);
}
