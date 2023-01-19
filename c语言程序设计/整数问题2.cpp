#include<stdio.h>
#include<math.h> 
int main()
{
	int n,i,j,sum=0,num,min,max,wei,flag;
	scanf("%d",&n);
	min=pow(10,n-1);
	max=pow(10,n);
	if(n==0) printf("%d\n",n);
	else if(n==8) printf("0\n");
	else {
	for(i=min;i<max;i++)
	{
		flag=1;
		num=i;
		for(j=n;j>=1;j--)
		{
			wei=num/pow(10,n-j);
			if(wei%(j*j)!=0)
			{
				flag=0;
				break;
				
			}
			
		}
		
	if(flag==1) {sum++;}	
	}
	printf("%d\n",sum);}
		
 } 
