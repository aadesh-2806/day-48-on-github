#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,x,m,s;
//	clrscr();
	printf("Welcome\nEnter a value=\n");
	scanf("%d" ,&n);
	i=1;
	while(i<=n)
	{
		printf("*");
		i=i+1;
	}
	printf("\n");
	x=1;
	while(x<=n-2)
	{
		printf("*");
		m=1;
		while(m<=n-2)
		{
			printf(" ");
			m=m+1;
		}
		printf("*");
		printf("\n");
		x=x+1;
	}
	s=1;
	while(s<=n)
	{
		printf("*");
		s=s+1;
	}
       getch();
}


