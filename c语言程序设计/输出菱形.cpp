#include<stdio.h>
int main()
{
	int n,t,x,a,i,j=1;//nΪ�±߳��͸ߣ�tΪn�ļ�¼��aΪ�����֣�iΪ�м�¼��Ϊ��jΪ�м�¼����
	scanf("%d%d",&n,&a);
	t=a;
	if(n==1) printf("%d\n",a);
	while(j<=n&&n>1)
	{
		for(i=1;i<=j-1;i++,t++)
		{
			printf(" ");
		}
		if(t>=10) t-=10;
		for(;j==1&&n%2&&i<=n+n/2;i++,t++)
	}
	 
 } 
