#include<stdio.h>
int main()
{
	int i,j,n,a,b,k,x=0;
	scanf("%d",&n);
	for(i=-n+1;i<=n-1;i++)
	 {
	  {a=i<0 ? -i:i;
	   b=2*(n-a)-1;}
	   for(k=1;k<=a+b;k++)
	    {x++;}
	    {if(k<=a) printf(" ");
	       else printf("%d",x);}
	   
	printf("\n");
	}
	return 0;
 } 
