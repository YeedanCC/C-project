#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	char b[100];
	gets(a);
	gets(b);
	int n1,n2; 
	n1=strlen(a);
	n2=strlen(b);
	int i,j=0,flag;
	for(i=0;i<n1;i++)
	{
		flag=0;
		for(;j<n2;j++)
		{
			if(b[j]!=a[i]&&b[j]!='\0')
			{
				continue;
			}
			if(b[j]==a[i])
			{
				flag=1;
				break;
			}
		}
	}
	if(flag==1) puts(b);
	if(flag==0) printf("No\n");
}
