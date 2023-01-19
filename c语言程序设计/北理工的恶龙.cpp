#include<stdio.h>
#include<stdlib.h>
int a[3000],b[3000];
int cmp(const void *a,const void *b){return *(int *)a-*(int *)b;}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int u[3000];
	int i,j,flag,h,sum=0;
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<m;i++)scanf("%d",&b[i]);
	qsort(a,n,sizeof(a[0]),cmp);
	qsort(b,m,sizeof(b[0]),cmp);
	if(m<n) printf("bit is doomed!\n");
	else
	{
		for(i=0;i<sizeof(a[0]);i++)
		{
			flag=1;
			for(j=0;j<sizeof(b[0]);j++)
			{
				if(a[i]<b[j]){
					flag=0;
					break;
				}
			}
			for(h=0;h<sizeof(b[0]);h++)
			{
				u[h]=b[j];
				break;
			}
		}
		for(i=0;i<h;i++)
		{
			sum+=u[i];
		}
		printf("%d\n",sum);
	}
}
