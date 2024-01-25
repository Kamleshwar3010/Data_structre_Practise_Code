#include <stdio.h>
int binarysearch(int arr[], int n, int key)
{
    int start = 0, end = n, mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            printf("%d is at index no %d or at %dth position", key, mid, mid + 1);
            break; // if value is matched break the loop
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int element, val;
    printf("How many element you want in your array \t");
    scanf("%d", &element);
    int arr[element];
   printf("Enter The value in Array\n");
    for (int i = 0; i < element; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to Search in array \t ");
    scanf("%d", &val);
    binarysearch(arr, element, val);
    return 0;
}
