#include <stdio.h>
void main()
{
	long int left,p,i,j,k,q,flag[100],n,m;
	scanf("%d %d",&n,&m);
	left=n;p=1;
	for(i=1;i<=n;i++)
	flag[i]=1;
	for(i=1;i<=n;i++)
	{
		q=(m-1)%left+1;
		j=0;k=p;
		while(j!=q)
		{
			if(flag[k]==1) j++;
			if(j==q) break;
			k++;
			if(k==n+1) k=1; 
		}
		flag[k]=0;
		p=k;left--;
	}
	printf("The left child is NO %d.\n",k);
} 
