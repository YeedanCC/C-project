/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
 
#include <stdio.h>  
#include <stdlib.h>  
  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */  
  
int merge_sort(char *a,char *b,char *c) 
{
  while(*a&&*b)
  {
  	if(*a>*b)
  	{
  		*c++=*b++; 
	  }
	  else *c++=*a++;
  }
  if(*a==0) *a=*b;
  *c++=*a++;
  return 0;

 } 
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
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */ 
