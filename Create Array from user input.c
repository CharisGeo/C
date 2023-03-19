#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n = 0;
	printf("Enter number of elements: ");
	scanf("%d" , &n);
	
	int arr[n];
	//int size = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d \n", arr[i]);
	}

	return 0;
}
