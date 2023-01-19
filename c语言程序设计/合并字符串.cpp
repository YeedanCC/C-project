#include<stdio.h>
#include<string.h>
int main()
{
	char b[100],c[100];
	
	int j,h,k,m,n,len;//循环变量h,k,第j轮比较，较大数，较小数 
    gets(b);
    gets(c);
	strcat(b,c); 
    len = strlen(b);
	for(j=1;j<len;j++)//用气泡法给数据排序。
	{
		for(h=0;h<len-j;h++)
		{
			if(b[h]>=b[h+1])
			{
				m=b[h];
				b[h]=b[h+1];
				b[h+1]=m;
			}
		}
	}
	puts(b);
 } 
