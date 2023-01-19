#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int u[3000];
	int a[3000],b[3000];
	int i,j,flag,h,sum=0,max=0;
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<m;i++)scanf("%d",&b[i]);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
		  if(a[j]>a[j+1]){
			max=a[j];
			a[j]=a[j+1];
			a[j+1]=max;
		}}
	}
		for(j=1;j<=m;j++)
		{
		for(i=0;i<m-j;i++)
	{
		if(b[i]>b[i+1]){
			max=b[i];
			b[i]=b[i+1];
			b[i+1]=max;
		}
	}}	

	j=0;
	
	{
		for(i=0;i<m;i++)
		{
			if(j==n)break;
			if(b[i]>=a[j]){
				j++;
				sum+=b[i];
			}
		}if(j!=n) printf("bit is doomed!\n");
else	printf("%d\n",sum);	
	}
		
}
