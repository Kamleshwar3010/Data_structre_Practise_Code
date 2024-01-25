#include <stdio.h>

int main()
{
	int n, m, temp;
	printf("Enter the size of array 1-\t");
	scanf("%d", &n);
	int arr[n];
	printf("Enter value in array 1\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the size of array 2-\t");
	scanf("%d", &m);
	int a[m];
	printf("Enter value in array 2\n");
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
	}
	int ar[m + n];

	int i = 0, j = 0, k = 0;
	while (i < n && j < m)
	{
		if (arr[i] < a[j])
		{
			ar[k] = arr[i];
			i++;
			k++;
		}
		else if (arr[i] > a[j])
		{
			ar[k] = a[j];
			j++;
			k++;
		}
	else
		{
			ar[k] = arr[i];
			k++;
			ar[k] = a[j];
			i++;
			j++;
			k++;
		}
	}
	while (k < n + m)
	{
		if (n > m)
		{
			ar[k] = arr[i];
			i++;
			k++;
		}
		else
		{
			ar[k] = a[j];
			k++;
			j++;
		}
	}
	printf("Merged array-\n");
	for (int p = 0; p < n + m; p++)
	{
		printf("%d\t", ar[p]);
	}
	return 0;
}