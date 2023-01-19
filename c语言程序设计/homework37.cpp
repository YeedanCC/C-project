#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int min,max;//上下限
	int i,j,num,wei;//循环计数,所要寻找的数,前n位 
	int sum=0,flag=0;//一共多少个,前n位可以被整除的标志 
	scanf("%d",&n);
	if(n==0)
	{
		printf("0\n");
	}
	else
	{
		min=pow(10,n-1);
	    max=pow(10,n);
	    for(i=min;i<max;i++)
	    {
		num=i;
		flag=1;
		//printf("num=%d\n",num);
		for(j=n;j>=1;j--)
		{
			wei=num/(pow(10,n-j));
			//printf("wei=%d\n",wei);
			if(wei%(j*j)!=0)
			{
				flag=0;
				break;
			}
		}
		//printf("%d中flag=%d",num,flag);
		   if(flag==1)
		   {
			   sum++;
		   }
	    }
	    printf("%d\n",sum);
	}	
} 
