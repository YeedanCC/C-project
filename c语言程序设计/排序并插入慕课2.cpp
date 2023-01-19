#include<stdio.h>
int main()
{
	int i;
	char b[9];
	gets(b);
	char t;
	scanf("%c",&t);
	char a[10];
	for(i=0;i<9;i++)
	{
		a[i]=b[i];
	}
	a[9]=t;
	int j,m;
	for(i=1;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	char c[10];
	for(i=0;i<10;i++)
	{
		c[i]=a[i];
	}
    puts(c);
	printf("\n");
}
