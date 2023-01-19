#include<stdio.h>
#include<string.h>
int main()
{
	int i,flag,n;
	char a[100];
	gets(a);
	n=strlen(a);
	for(i=0;i<n/2;i++)
	{
		flag=1;
		if(a[i]!=a[n-i-1])
		{
			flag=0;
			printf("NO\n");
			break;
		}
	}
	if(flag==1) printf("YES\n");

 } 
