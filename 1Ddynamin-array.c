#include<stdio.h>
int main()
{
	int i,a[50];
	for(i=0;i<5;i++)
	{
		printf("enter number ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
