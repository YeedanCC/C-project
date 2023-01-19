#include<stdio.h>
main()
{
	char s1[20],s2[20];
	int i,k;
	gets(s1);
	gets(s2);
	i=0;
	while(s1[i]!='\0') i++;
	k=0;
	while(s2[k]!='\0') 
	 {s1[i]=s2[k];
	  i++;
	  k++;
	 }
	s1[i]='\0';
	printf("Output string: %s\n",s1);
}
