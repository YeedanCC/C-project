#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	char b;
	scanf("%c",&b);
	int i,j;
	for(i=1;i<=a;i++)
	{
		if(b>'z'){
			b='a';
			printf("%c",b);
		}
		else printf("%c",b);
		b++;
	}
	printf("\n");
	for(i=0;i<a;i++)
	{
		for(j=1;j<=a-2-i;j++)
		{
			printf(" ");
		}
		printf("%c",++b);
		for(j=1;j<a-1;j++)
		{
			printf(" ");
		}
		printf("\n");
	}
 } 
