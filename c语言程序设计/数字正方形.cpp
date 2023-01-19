#include<stdio.h>
int main()
{
	int n,i,j,a=1;   //n是边长，i是行变量，j是列变量，a是输出的数 
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
