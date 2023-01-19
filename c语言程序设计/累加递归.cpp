#include<stdio.h>
int sum(int x,int y)
{
	if(x>=y) return x;
	return x+sum(x+1,y);
}
int main()
{
	int m,n,M;
	scanf("%d%d",&m,&n);
	M=sum(m,n);
	printf("The sum from %d to %d is %d.\n",m,n,M);
}
