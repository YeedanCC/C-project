#include <stdio.h>
#define N 7 
main()
{
	int day[N],i,j=0,a[N],b[N],flag=0,hour[N],d,m;
	for(i=0;i<7;i++)
	scanf("%d %d\n",&a[i],&b[i]);
	for(i=0;i<7;i++)
	{
		if(a[i]+b[i]<10) continue;
		else 
		{
			flag=1;
			day[j]=i+1;
			hour[j]=a[i]+b[i];
			j++;
		}
	}
	if(flag==0) printf("0\n");
	else if(j==1) printf("%d\n",day[0]);
	else 
	{    
	     d=day[0];
	     m=hour[0];
		 for(i=0;i<j;i++)
	     { 
		    if(hour[i+1]>m) m=hour[i+1],d=day[i+1];
		    else continue;
         }
         printf("%d\n",d);
    }
    return 0;
} 
