#include <stdio.h>
int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("%d is at index no %d or at %dth position", key, i, i + 1);
        }
    }
    return -1;
}
int main()
{
    int element, val;
    printf("How many element you want in your array \t");
    scanf("%d",&element);
    int arr[element];
    printf("Enter The value in Array\n");
    for (int i = 0; i <element; i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Enter the value to Search in array \t ");
    scanf("%d",&val);
    linearsearch(arr, element, val);
    return 0;
}