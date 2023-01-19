#include <stdio.h>  
#include <stdlib.h>  
  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */  
  
int merge_sort(char *a,char *b,char *c);   
int main(int argc, char *argv[]) 
{            
    char a[100];  
        char b[100];  
        char c[200];  
  
    gets(a);  
        gets(b);  
       merge_sort(a,b,c);  
    puts(c);  
    return 0;  
}
merge_sort(char *a,char *b,char *c)
{
	char *s;
	for(;*a!='\0'&&*b!='\0';)
	 if(*a < *b) *c++ = *a++;
	 else *c++ = *b++;
	s=(*a!='\0')?a:b;
	while(*s!='\0') *c++ = *s++;
	*c='\0';
} 
