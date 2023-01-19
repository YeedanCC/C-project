#include<stdio.h>
#include <string.h>
int main()
{
	char a[100];
	gets(a);
	int i,j,m,n,h;
	h=strlen(a);
	for(i=0;i<=h;i++)
	{
		for(j=0;j<=h;j++)
		{
			if(a[i]==a[j]) {n++;m=a[i];}continue;
		}
	}
   for(i=h;i>0;i--)
   {
   	if(a[i]==m) {a[i]=n;}break;
   }
   gets(a);
   
}
