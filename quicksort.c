#include <stdio.h>
int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low + 1, j = high, temp;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    } while (i < j);
    temp = a[j];
    a[j] = a[low];
    a[low] = temp;
    return j;
}
void quicksort(int a[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(a, low, high);
        quicksort(a, low, pivot_index - 1);
        quicksort(a, pivot_index + 1, high);
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
    quicksort(a, 0, n - 1);
    print(a, n);

    return 0;
}
