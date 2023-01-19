#include<stdio.h>
main()
{
	char s1[80];
	int i;
	gets(s1);
	i=0;
	while(s1[i]!='\0') i++;
	printf("length=%d\n",i);
	
}
 
