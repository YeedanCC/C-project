#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	int n,i,j,m;
	gets(a);
	n=strlen(a);
	for(i=0;i<=n;i++)
	{
	puts(a);
	
	{
		m=a[i];
		for(j=0;j<n;j++)  {a[j]=a[j+1];}
		a[j+1]=m;	
		
		}
		
	}
	
	return 0;
 } 
