#include<stdio.h>
#include<string.h>
int mian()
{
	char a[100];
	gets(a);
	char b[100];
	int i,j,m,n,h=0,flag;//循环变量，不重复的数，a位数. 
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		flag=1;
		for(j=1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				flag=0;
				break;
			}
			if(flag==1)
			{
				b[h]=a[i];
				h++;
			}
		}
	 }
	for(i=0;i<h;i++) 
	printf("%c",b[h]);
	printf("\n"); 
	return 0;
}

