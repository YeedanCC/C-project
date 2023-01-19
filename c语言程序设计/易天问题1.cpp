#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=0;
	for(int i=a;i<=b;i++)
	{
		c=c+i;
	}
	printf("%d\n",c); 
	
	return 0;
 } 
