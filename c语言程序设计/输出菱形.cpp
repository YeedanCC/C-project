#include<stdio.h>
int main()
{
	int n,t,x,a,i,j=1;//n为下边长和高，t为n的记录，a为首数字，i为行记录数为，j为列记录数。
	scanf("%d%d",&n,&a);
	t=a;
	if(n==1) printf("%d\n",a);
	while(j<=n&&n>1)
	{
		for(i=1;i<=j-1;i++,t++)
		{
			printf(" ");
		}
		if(t>=10) t-=10;
		for(;j==1&&n%2&&i<=n+n/2;i++,t++)
	}
	 
 } 
