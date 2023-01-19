#include<stdio.h>
int sum(int a)
{
	int i=1,b=0,sum=0;
	for(i=1;a>0;i++)
	{
		b=a%10;
		sum=sum+b;
		a=(a-b)/10;
	}
	return sum;
}
int main()
{
	int a,n=0;
	scanf("%d",&a);
	n=sum(a);
	printf("%d\n",n);
	return 0;
}
