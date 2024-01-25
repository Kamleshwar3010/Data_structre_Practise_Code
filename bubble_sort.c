#include <stdio.h>

int bubble_sort(int size,int arr[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else
            {
                continue;
            }
        }
    }
    printf("Your Sorted array is-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 1;
}

int main()
{
    int n;
    printf("How many element you want in your array \t");
    scanf("%d", &n);
    int arr[n];
    printf("Enter The value in Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble_sort(n,arr);
    return 0;
}