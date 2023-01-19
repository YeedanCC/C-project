#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	int x[10]={0};
	scanf("%s",a);
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		x[a[i]-'0']++;
	}
	for(int i=9;i>=0;i--);
	 for(int j=0;j<x[i];j++)
	  printf("%d",i);
	printf("\n");
}
