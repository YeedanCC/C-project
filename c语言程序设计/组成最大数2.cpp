#include<stdio.h>
int main()
{
	int A[20]={0},n,i,j,t,m;
	scanf("%d",&n);
	for(i=0;n>0;n/=10)
	{
		A[i]=n%10;
		i++;
	}
	t=i-1;
	for(j=0;j<=t;j++)
	{
		for(i=j;i<=t;i++)
		{
			if(A[j]<A[i])
			{
				m=A[j];
				A[j]=A[i];
				A[i]=m;
			}
		}
	 } 
	 for(i=0;i<=t;i++)
	 {
	 	printf("%d",A[i]);
	 }
	 printf("\n");
	 return 0;
}
