#include<stdio.h>
int iseven(int num)
{
	return !(num & 1);
}
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	if(iseven(num))
	{
		printf("the number is even.");
	}
	else
	{
		printf("the number is odd.");
	}
	return 0;
}
