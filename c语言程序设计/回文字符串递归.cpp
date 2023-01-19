#include<stdio.h>
#include<string.h>
char a[6999];
void find(int l,int r)
{
	if(l>=r)
	{
		printf("Yes\n");
		return ;
	}
	else if(a[l]==a[r])
		find(l+1,r-1);
	else 
	{
		printf("No\n");
		return;
	}
		
}
int main()
{
	int i,n;
	
	
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		n=strlen(a);
		find(0,n-1);
		
	}
}
