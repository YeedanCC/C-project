#include<stdio.h>
int main()
{
	int i,j,t;
	int a[10];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<9;i++)
	{
		printf("%d,",a[i]);
		
	 }
	  printf("%d\n",a[9]);
}
