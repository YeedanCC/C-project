#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	int m=n;
	
	for(i=-n+1;i<=n-1;i++)
	{
		if(i<0) k=-i;
		else k=i;
		for(j=1;j<=2*n-k-1;j++)
		{
			if(j<=k) printf(" ");
			else if(j<=n) printf("%d",m--);
			else if(j==n+1) 
			{
				m=m+2;
				printf("%d",m); 
			}
			else if(j<=2*n-k-1) 
			{
			    printf("%d",++m);
			}
		}
		m=n;
		printf("\n");
	}
 } 
