#include <stdio.h>

void merge(int arr[], int first, int mid, int last)
{
    int arr1[mid - first + 1];
    int arr2[last - mid];
    for (int i = 0; i < mid - first + 1; i++)
    {
        arr1[i] = arr[i];
    }
    for (int j = 0; j < last - mid; j++)
    {
        arr2[j] = arr[mid + j + 1];
    }
    int i = 0, j = 0, k = 0;
    while (i < mid - first + 1 && j < last - mid)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else if (arr1[i] > arr2[j])
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < mid - first + 1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < last - mid)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}
void mergesort(int arr[], int f, int l)
{
    int mid = (f + l) / 2;
    if (f < l)
    {
        mergesort(arr, f, mid);
        mergesort(arr, mid + 1, l);
        merge(arr, f, mid, l);
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int n, option;
    printf("How many elements are in array-\t");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Original array\n");
    print(a, n);
    printf("Sorted array\n");
    mergesort(a, 0, n - 1);
    print(a, n);

    return 0;
}
