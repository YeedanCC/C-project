#include<stdio.h>
int main()
{
	int n,i,j=0,t=1,k;//i是行数，j是列数，t是数组中的数,k是一圈。 
	scanf("%d",&n);
	int A[50][50];
	for(k=0;k<=(n-1)/2;k++)
	{
		j=k;
		i=k;
		for(;j<n-k;j++)
		{
			A[i][j]=t;
			t++; 
			
		}
		i++;
		j--;
		for(;i<n-k;i++)
		{
			A[i][j]=t;
			t++;
		}
		i--;
		j--;
		for(;j>=k;j--)
		{
			A[i][j]=t;
			t++;
		}
		i--;
		j++;
		for(;i>k;i--)
		{
			A[i][j]=t;
			t++;
		}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
			  printf("%3d",A[i][j]);
			}
	printf("\n");
		}
		
		return 0;
		
		
	}

	

