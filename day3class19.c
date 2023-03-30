#include<stdio.h>
#define MAX_SIZE 100

int main()
{
	int arr[MAX_SIZE];
	int N, i;
	int * ptr = arr;
	
	printf("enter size of array: ");
	scanf("%d", &N);
	
	printf("enter elements in array:\n");
	for (i=0;i<N;i++)
	{
		scanf("%d",ptr);
		ptr++;
	}
	ptr=arr;
	
	printf("array elements:");
	for (i=0;i<N;i++)
	{
		printf("%d",*ptr);
		ptr++;
	}
	
	return 0;
	
}
