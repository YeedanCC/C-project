#include<stdio.h>
int main()
{
	int h,i,j,n,a;
	scanf("%d",&h);
	for(i=1;i<=h;i++)
	 for(j=1;j<=n*n-1-i;j++)
	   {if(i-j<=0) printf("*");
	     else printf(" ");
	   }
	   printf("\n");
 } 
