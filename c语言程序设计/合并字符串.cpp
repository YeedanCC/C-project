#include<stdio.h>
#include<string.h>
int main()
{
	char b[100],c[100];
	
	int j,h,k,m,n,len;//ѭ������h,k,��j�ֱȽϣ��ϴ�������С�� 
    gets(b);
    gets(c);
	strcat(b,c); 
    len = strlen(b);
	for(j=1;j<len;j++)//�����ݷ�����������
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
