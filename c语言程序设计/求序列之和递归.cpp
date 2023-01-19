#include<stdio.h>
double sum(int x)
{
	if(x%2==0&&x>0)
	{
		return (1.0/x)+sum(x-1);
	}
	else if(x%2!=0&&x>0) return (0-(1.0/x))+sum(x-1);
}
int main()
{
	int a;
	float m;
	scanf("%d",&a);
	m=sum(a);
	if(m==1)printf("1\n");
	else printf("%.6lf\n",m);
}
