#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,f,t=0;
	scanf("%d%d",&n,&f);
	t=f;
	for(j=1;j<=3*n-2;j++);
	{
		if(j==3*n-2) printf("%d",t);
		else printf("%d ",t);
		if(j<(3*n-1)/2)
		{
			if(t==9) t=0;
			else t++;
		}
		else if(j==(3*n-1)/2&&n%2==0) continue;
		else
		{
			if(t==0) t=9;
			else t--;
		 } 
	}
	printf("\n");
	t=f;
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=2*(i-1);j++) printf(" ");
		if(i==n)
		{
			for(j=1;j<=(n+1)/2;j++)
			{
				if(t==9)
				{
					t=0;
					printf("%d ",t);
				}
				else printf("%d",++t);
			}
			for(j=1;j<=n/2;j++)
			{
				if(t==0&&n%2!=0) t=9;
				else if(j==1&&n%2==0)
				{
					if(j==n/2) printf("%d\n",t);
					else printf("%d ",t);
					continue;
				}
			
			else 
			t--;
			if(j==n/2) printf("%d\n",t);
			else printf("%d ",t);
		}
	}
	else 
	{
		if(t==9)
		{
			printf("0");
			for(j=1;j<=6*n-4*i-3;j++) printf(" ");
			printf("0\n");
			t=0;
		}
		else
		{
			t++;
			printf("%d",t);
		
			for(j=1;j<=6*n-4*i-3;j++)  printf("%d\n",t);
		}
	}
		}
	return 0;
}
	

