#include<stdio.h>
int main()
{
	int what;
	printf("enter 0 for sum and 1 for multiply:");
	scanf("%d",&what);
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("\nenter b:");
	scanf("%d",&b);
	printf("\n");
	if (what == 0)
	{
	printf("%d",a+b);
	}
	else
	{
		printf("%d",a*b);
		
	}
	printf("\n");
	return 0;
}

