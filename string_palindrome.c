#include<stdio.h>
#include<math.h>

void main()
{	
	int i,s,t,n,r,j;
	char a[50];
	printf("hello aadesh agrawal(2019uec1660)\nenter value=");
	gets(a);
	
	for(i=0;a[i]!='\0';i++);
	
	s=0;
	for(j=i-1;j>=0;j--)
	{
		if(a[s]==' ')
		{
			s++;
		}
		if(a[j]==' ')
		{
			j--;
		}
		if(a[s]!=a[j])
		{
			break;
		}
		s++;
	}
	if(j==-1)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	getch();
}
