#include<stdio.h>
#include<math.h>
int gcd(int x,int y)
{
	if(y%x==0) return x;
	return gcd(y%x,x);
}
int main()
{
	int m,n,a;
	scanf("%d%d",&m,&n);
	a=gcd(m,n);
	printf("%d\n",a);
}
