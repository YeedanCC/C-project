#include<stdio.h>
int main()
{
	int n,i,j,a=1;   //n�Ǳ߳���i���б�����j���б�����a��������� 
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)  
		{
			printf("%3d",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
