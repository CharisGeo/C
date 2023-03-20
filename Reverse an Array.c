#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    int result[num];
    int k = 0;
    for(int i = num; i -- > 0;)
    {
        if(k == num)
        {
            break;
        }
        result[k] = arr[i];
        k++;
    }

    for(i = 0; i < num; i++)
        printf("%d ", result[i]);
    return 0;
}
