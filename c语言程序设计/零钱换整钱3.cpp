#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	n*=10;
	if(n%16!=0) printf("No change.\n");
	else 
	{
		n=n/16;
		printf("%d,%d,%d\n",n*10,n*12,n*9);
	}
return 0;
 } 
