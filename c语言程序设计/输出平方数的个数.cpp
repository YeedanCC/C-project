#include<stdio.h>
int main()
{
	int m,n,i,j,num=0,a,b=2;//范围，循环变量，个数，运算的数。 
	scanf("%d,%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==j*j)
			{
				num++;
				break;
			}
		}
	}
    printf("%d\n",num);
 } 
