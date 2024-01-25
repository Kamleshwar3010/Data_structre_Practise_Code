#include <stdio.h>

int main()
{
	int n,c=0;
	printf("Enter row of matrix-\t");
	scanf("%d", &n);
	int arr[n*n];
	printf("Enter Element in matrix\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j)
			{
				arr[c] = 0;
				c++;
			}
			else
			{
				scanf("%d", &arr[c]);
				c++;
			}
		}
	}
	c=0;

		printf("\nLower Triangular matrix\n");
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("%d ", arr[c]);
				c++;
			}
			printf("\n");
		}
		return 0;
	}