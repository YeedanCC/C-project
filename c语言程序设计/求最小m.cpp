#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;;i++)
	{
		if(sum<n){sum=sum+i;}
		else 
		{i=i-1;
		break;}
		
	}
	printf("%d\n",i);
 } 
