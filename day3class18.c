#include<stdio.h>
void swap(int *x , int *y)
{
	int temp;
	temp =*x;
	*x=*y;
	*y=temp;
	printf("x=%d,y=%d",*x ,*y);
	
}
void main()
{
	int a=10,b=20;
	
	swap(&a,&b);
	printf("\na=%d,b=%d",a,b);
	
}
