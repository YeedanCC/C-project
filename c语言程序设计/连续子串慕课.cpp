#include <stdio.h>
#include <string.h>
int main()
{	char a[100];	
int n,l,j,k,i,tmp;	
while(scanf("%s",a)!=EOF)
{		n = strlen(a);		
for(j=0;j<n-1;j++)
{
			for(k=n-1;k>j;k--)
			
	{				if(a[k]<a[k-1])
			{					tmp = a[k];				
				a[k] = a[k-1];				
					a[k-1] = tmp;			
						}				}		}	
							for(i=0;i<n;i++)
							{			printf("%c",a[i]); 		}
								}	
								return 0;
								} 


