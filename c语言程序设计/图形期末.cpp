#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=m+i-1;j++)
		{
		  if(j==m-i+1||j==m+i-1) printf("*");
		  else printf(" ");
		}
		printf("\n");
	}
	for(i=1;i<=2*m;i++)
	printf("*");
	printf("\n");
 } 
 

