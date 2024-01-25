#include <stdio.h>
int insertion_sort(int size, int arr[])
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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
    insertion_sort(n, arr);
    return 0;
}