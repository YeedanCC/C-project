#include<stdio.h>
int main()
{
	int m,n,i,j,num=0,a,b=2;//��Χ��ѭ����������������������� 
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
