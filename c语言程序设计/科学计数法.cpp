#include<stdio.h>
int main()
{
	float n,sum;
	int a,i;
	scanf("%f,%d",&n,&a);
	for(i=1;i<=a;i++)
	{
		sum=n*10;
		n=sum;
	}
	printf("%.8f\n",sum);
}
