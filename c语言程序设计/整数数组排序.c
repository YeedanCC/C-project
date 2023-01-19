#include <stdio.h>  
#include <stdlib.h>  
  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */  
  
int resort(int *pa[],int num);  
  
int main(int argc, char *argv[]) {  
          
    int a[100];  
    int num;  
      
    int *pa[100];  
    scanf("%d",&num);  
      
    int i=0;  
    for(i=0;i<num;i++)  
     {  
       scanf("%d",&a[i]);  
       pa[i]=&a[i];           
     }  
  
    resort(pa,num);  
  
    for(i=0;i<num;i++)  
    {  
       printf("%d\n",*pa[i]);  
    }  
    return 0;  
} 
resort(int *pa[],int num)
{
	int i,j,p,m;
	for(i=0;i<num-1;i++)
	{
		p=i;
		for(j=i+1;j<num;j++)
		 if(*pa[p]>*pa[j]) p=j;
		if(p!=i)
		{
			m=*pa[p];
			*pa[p]=*pa[i];
			*pa[i]=m; 
		}
	} 
}
