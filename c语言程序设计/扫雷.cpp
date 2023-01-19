#include<stdio.h>
#include<string.h>
int ans[200][200];
char s[200][200];
int main()
{
	int n,m,cnt=0;
	while(1)
	{
		memset(ans,0,sizeof(ans));
		memset(s,0,sizeof(s));
		scanf("%d%d",&n,&m);
		if(n==0&&m==0)break;
		for(int i=0;i<n;i++)scanf("%s",s[i]);
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(s[i][j]=='*')
			{
				ans[i][j]-=200;
				for(int k=-1;k<=1;k++)
				for(int l=-1;l<=1;l++)
				{
					int ii=i+k,jj=j+l;
				
					if(ii>=0&&jj>=0)
					{
						ans[ii][jj]+=1;
					}
				 } 
			}
		}
		if(cnt>0)printf("\n");
		printf("Field #%d:\n",++cnt);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)if(ans[i][j]>=0)printf("%d",ans[i][j]);else printf("*");
			printf("\n");
		}
	}
	return 0;
}
