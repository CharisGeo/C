#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void Insert(int data, int position)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
    temp1->data = data;
    temp1->next = NULL;
    if(position == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    struct Node* temp2 = head;
    for(int i = 0; i < position-2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

void Delete(int position)
{
    struct Node* temp1 = head;
    if(position == 1)
    {
        head = temp1->next; // head now points to 2nd Node
        free(temp1);
        return;
    }
    for(int i = 0; i < position-2; i++)
    {
        temp1 = temp1->next;
    }
    struct Node* temp2 = temp1->next; // nth node to be deleted
    temp1->next = temp2->next; //set link of (n-1)th node to the link of nth node which points to n+1 node
    free(temp2);
}

void Print()
{
    struct Node* temp = head;
    while(temp->next != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
 	Insert(2,1);
	Insert(4,2);
	Insert(6,2);
	Insert(5,3); 
	Print();
	int n;
	scanf("%d",&n);
	Delete(n);
	Print();

    return 0;
}
