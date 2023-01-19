#include<stdio.h>
void main()
{
	char x='a';
	scanf("%c",&x);
	if(x>='A'&&x<='Z')
	 {
	 x=x+32;}
	if(x>='a'&&x<='z')
	{x=x-32;
	}
	else
	 printf("%c\n",x);
	}
