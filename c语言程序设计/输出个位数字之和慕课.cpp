#include<stdio.h>
int sum(int a)
{
	int i,b,sum;
	for(i=1;a>0;i++)
	{
		b=a%10;
		sum=sum+b;
		a=(a-b)/10;
	}
	return sum-1;
}
int main()
{
	int a,n;
	scanf("%d",&a);
	n=sum(a);
	printf("%d\n",n);
	return 0;
}
