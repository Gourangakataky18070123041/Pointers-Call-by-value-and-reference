#include<stdio.h>
#include<stdlib.h>
void swap(int *x,int *y);
int main()
{
	int x,y;
	printf("Enter two numbers:\n");
	scanf("%d%d",&x,&y);
	printf("Values Before Swapping:-\n");
	printf("X=%d\tY=%d\n",x,y);
	swap(&x,&y);
	printf("Values After Swapping:-\n");
	printf("X=%d\tY=%d\n",x,y);
}
void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	printf("Values After Swapping:-\n");
	printf("X=%d\tY=%d\n",x,y);
}
