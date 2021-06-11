#include<stdio.h>

void main()
{
	char a[100],b[100][100];
	int i,k,n,m,j,l,c[100];
	
	printf("hello\nenter string=");
	gets(a);
												//	string2.c				
	i=0; 
	while(a[i]!=0)
	{
		i++;
	}
	n=i;												
	
	i=0;
	while(i<n)
	{
		j=0;
		while(j<=i)
		{
			printf("%c",a[j]);
			j++;
		}
		printf("\n");
		i++;
	}												
	
	getch();
	
}
