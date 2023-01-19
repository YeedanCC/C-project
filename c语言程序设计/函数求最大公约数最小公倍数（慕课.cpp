#include<stdio.h>
int fun1(int a,int b)
{
	int c=0,t=0;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	do{
		c=a%b;
		a=b;
		b=c;
	}while(b!=0);
	return a;
 } 
int fun2(int a,int b)
{
	int m=0,n=0;
	m=fun1(a,b);
	a=(a/m)*(b/m)*m;
	return a;
}
int main()
{
	int a,b,k,l;
	scanf("%d,%d",&a,&b);
	k=fun1(a,b);
	l=fun2(a,b);
	printf("%d\n",k);
	printf("%d\n",l);
}
