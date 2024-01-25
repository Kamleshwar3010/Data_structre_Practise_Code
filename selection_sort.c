#include <stdio.h>

int selection_sort(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j <= size; j++)
        {
            if (arr[i] >= arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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

    return 0;
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

    selection_sort(n, arr);
    return 0;
}