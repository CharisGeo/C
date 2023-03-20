#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* getNewNode(char data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct Node* Insert(struct Node* root, char data)
{
    if(root == NULL)
    {
        root = getNewNode(data);
    }
    else if(data <= root->data)
    {
        root->left = Insert(root->left,data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

void Preorder(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    printf("%c", root->data);
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    Inorder(root->left);
    printf("%c", root->data);
    Inorder(root->right);
}

void Postorder(struct Node* root)
{
    if(root == NULL)
    {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    printf("%c", root->data);
}

int main()
{
	/*Code To Test the logic
	Creating an example tree
			M
		   / \
		  B   Q
		 / \   \
		A   C   Z
	*/
	struct Node* root = NULL;
	root = Insert(root, 'M'); root = Insert(root, 'B');
	root = Insert(root, 'Q'); root = Insert(root, 'Z');
	root = Insert(root, 'A'); root = Insert(root, 'C');
	//Print Nodes in Preorder. 
	printf("Preorder: ");
	Preorder(root);
	printf("\n");
	//Print Nodes in Inorder
	printf("Inorder: ");
	Inorder(root);
	printf("\n");
	//Print Nodes in Postorder
	printf("Postorder: ");
	Postorder(root);
	printf("\n");

    return 0;
}
