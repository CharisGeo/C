#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int A[5];
int n = sizeof(A)/sizeof(A[0]);
int front = -1;
int rear = -1;

bool isEmpty()
{
    if(front == -1 && rear == -1)
    {
       printf("Empty Queue \n");
       return true; 
    }
    else
    {
        printf("Non-Empty Queue \n");
        return false;
    }
}

void Enqueue(int x)
{
    if((rear + 1) % n == front)
    {
        return;
    }
    else if(isEmpty())
    {
        front = 0;
        rear = 0;
    }
    else
    {
        rear = (rear+1) % n;
    }
    A[rear] = x;
}

void Dequeue()
{
    if(isEmpty())
    {
        return;
    }
    else if(front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % n;
    }
}

void output()
{
    printf("Front element is: %d \n", A[front]);
}

int main(void)
{
	isEmpty();
	Enqueue(2);
	Enqueue(4);
	output();
	Enqueue(13);
	Dequeue();
	Enqueue(7);
	output();
	isEmpty();

	return 0;
}
