#include<stdio.h>
int main()
{
	int i,a,sum=510; 
	printf("sum=510\n");
	for(i=1;i<=7;i++)
	{
		a=(sum/2)+1;
		sum=sum-a;
		printf("sell=%d,",a);
		
	}
	printf("\n");
}
