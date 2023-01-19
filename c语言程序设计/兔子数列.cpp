#include<stdio.h>
int main()
{
	int m,a,b,i,s;
	scanf("%d",&m);
	s=0;
	i=1;
	a=1;
	b=0;
	do{
	   s=a+b;
	   a=b;
	   b=s;
	   i++;
	   
	}while(i<=m); 
	printf("No. %d is %d\n",m,s);
	
 } 
