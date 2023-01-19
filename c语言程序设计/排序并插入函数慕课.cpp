#include<stdio.h>
int main()
{
	int i;
	int b[9];
	for(i=0;i<9;i++)
	{
		scanf("%d,",&b[i]);
	}
	int t;
	scanf("%d",&t);
	int a[10];
	for(i=0;i<9;i++)
	{
		a[i]=b[i];
	}
	a[9]=t;
	int j,m;
	for(i=1;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	for(i=0;i<9;i++)
	{
		printf("%d,",a[i]);
	}
	printf("%d\n",a[9]);
}
