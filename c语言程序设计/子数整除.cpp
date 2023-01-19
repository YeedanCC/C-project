#include<stdio.h>
int main()
{
	int num,sub1,sub2,sub3,i,j,a,b,c,d,e,flag=0;
	scanf("%d",&num);
	for(i=10000;i<=30000;i++)
	{
		a=i/10000;
		b=i/1000-a*10;
		c=i/100-a*100-b*10;
		d=i/10-a*1000-b*100-c*10;
		e=i-a*10000-b*1000-c*100-d*10;
		sub1=a*100+b*10+c;
		sub2=b*100+c*10+d;
		sub3=c*100+d*10+e;
		if(sub1%num==0&&sub2%num==0&&sub3%num==0)
		{
			flag=1;
			printf("%d\n",i);
		}
	}
	if(flag==0)printf("00000\n");
	
		return 0;
}
