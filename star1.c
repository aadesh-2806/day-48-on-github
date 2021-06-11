#include<stdio.h>

void pattern(int );
void main()
{
	int n,f;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	pattern(n);	
	getch();
}

void pattern(int x)
{
	int i;
	if(x>1)
	{
		pattern(x-1);
	}
	for(i=1;i<=x;i++)
	{
		printf("*");
	}	
	printf("\n");
}
