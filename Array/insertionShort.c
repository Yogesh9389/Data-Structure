// Insertion short 
#include<stdio.h>
int main()
{
	int n;
	int i;
	printf("Enter a number : ");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter elements in array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n;i++)
	{
		int current = arr[i];
		int j = i-1;
		while(arr[j] > current && j>=0)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}
	printf("\nShorted array is : ");
	for(i=0; i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
