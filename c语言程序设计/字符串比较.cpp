#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	int i;
	gets(s1);
    gets(s2);
	if(strcmp(s2,s1)<0) 
	  
        printf("str1>str2\n");

	else if(strcmp(s2,s1)>0)

        printf("str1<str2\n"); 
	 
	else if(strcmp(s2,s1)==0) printf("str1==str2\n");
	
	
}
