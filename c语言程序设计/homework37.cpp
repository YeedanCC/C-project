#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	int min,max;//������
	int i,j,num,wei;//ѭ������,��ҪѰ�ҵ���,ǰnλ 
	int sum=0,flag=0;//һ�����ٸ�,ǰnλ���Ա������ı�־ 
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
		//printf("%d��flag=%d",num,flag);
		   if(flag==1)
		   {
			   sum++;
		   }
	    }
	    printf("%d\n",sum);
	}	
} 
