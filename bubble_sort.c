#include <stdio.h>

int main()
{
    int temp, i, j, len, arr[100];
    printf("Enter length of array : ");
    scanf("%d", &len);
    printf("Enter array : ");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    // int len = (sizeof(arr) / sizeof(int));
    // printf("size :%d\n", len);
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array :");
    for (i = 0; i < len; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
    return 0;
}