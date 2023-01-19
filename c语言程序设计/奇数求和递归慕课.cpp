#include<stdio.h>
int sum(int n)
{
	int a=0;
    for(int i=1;i<=n;i++)
    {
    	a=a+2*i-1;		
	 }	 
	 return a;
}
int main()
{
	int n,a;
	scanf("%d",&n);
	a=sum(n);
	printf("%d",a);
}
