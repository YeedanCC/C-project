#include<stdio.h>
#include<string.h> 
int main()
{
	int n;//�м�������
	char yunsuanfu[20];//�����
	char fuhao;
	char ch[20][1002];//���������
	char temp[1002];//��ʱװ���� 
	int num1[500];
	int num2[500];
	int result[500];
	int digure1=0,digure2=0,digure;
	int weizhi;//����װ���������һ��λ�� 
	int i,j,k;//ѭ������
	int flag=0,sign=0,size=0;//�ҵ���һ����0���ı�־,ȫ0�ı�־,˭��˭С�ı�־ 
	for(i=0;i<20;i++)
	{
		for(j=0;j<1001;j++)//��ʼ���ַ��� 
		{
			ch[i][j]=0;
		}
	}
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%s",&ch[i]);
	}
	for(i=0;i<=n-1;i++)//��ʼ���� 
	{
		sign=0;
		size=0;
		flag=0;
		//printf("��ǰ�������%s\n",ch[i]);
		weizhi=0;
		digure1=0;
		digure2=0;
		for(k=0;k<500;k++)
		{
			num1[k]=0;
			num2[k]=0;
			result[k]=0;
		}
		while(ch[i][weizhi]!='+' && ch[i][weizhi]!='-')//�ó���һ���� 
		{
			temp[weizhi]=ch[i][weizhi];
			//printf("temp[%d]=%c\n",weizhi,ch[i][weizhi]);
			digure1++;
			weizhi++;
		}
		for(j=digure1-1;j>=0;j--)//�ַ���ת���� 
		{
			num1[digure1-1-j]=0+temp[j]-'0';
			//printf("num1[%d]=%d",digure1-1-j,num1[digure1-1-j]);
		}
	    yunsuanfu[i]=ch[i][digure1];
	    //printf("\n");
	    //printf("yunsuanfu[%d]=ch[%d][%d]=%c\n",i,i,digure1,yunsuanfu[i]);
		weizhi=digure1+1;
		//printf("weizhi=%d\n",weizhi);
		while(ch[i][weizhi]!=0)//�õڶ����� 
		{
			//rintf("ch[%d][%d]=%c",i,weizhi,ch[i][weizhi]);
			temp[weizhi]=ch[i][weizhi];
			digure2++;
			weizhi++;
		}
		for(j=0;j<digure2;j++)
		{
			num2[j]=0+temp[digure2+digure1-j]-'0';
			//printf("num2[%d]=%d",j,num2[j]);
		}
		digure=(digure1>digure2)?digure1:digure2;
//		for(j=0;j<digure;j++)
//		{
//			printf("num1[%d]=%d ",j,num1[j]);
//		}
//		printf("\n");
//		for(j=0;j<digure;j++)
//		{
//			printf("num2[%d]=%d ",j,num2[j]);
//		}
//		printf("\n");
        if(yunsuanfu[i]=='+')//�ӷ� 
        {
        	for(k=0;k<digure;k++)
        	{
        		result[k]=num1[k]+num2[k];
        		if(k<digure-1)
        		{
        			if(result[k]>=10)//��λ 
        			{
        				result[k]=result[k]%10;
        				num1[k+1]++;
					}
				}
			}
			for(k=digure-1;k>=0;k--)
			{
				printf("%d",result[k]);
			}
			printf("\n");
		}
		else if(yunsuanfu[i]=='-')//���� 
		{
			if(digure<=2)//��λ�����¼��� 
			{
				result[0]=num1[1]*10+num1[0]-num2[1]*10-num2[0];
				printf("%d",result[0]);
			}
		else 
		{
				if(digure1>digure2)//��һ�����ȵڶ�����λ���� 
			{
				for(k=0;k<digure-2;k++)
			    {
				   result[k]=num1[k]-num2[k];
				   if(result[k]<0)
				   {
					result[k]=result[k]+10;
					num1[k+1]--;
				   }
			    }
			    result[digure-2]=num1[digure-1]*10+num1[digure-2]-(num2[digure-1]*10+num2[digure-2]);//�����������λ 
			    for(k=digure-2;k>=0;k--)
			    {
			       if(result[k]!=0)
			       {
			       	  flag=1;
				   }
				   if(flag==1)
				   {
				   	  printf("%d",result[k]);
				   } 
			    }
			}
			else if(digure2>digure1)
			{
				for(k=0;k<digure-2;k++)
			    {
				   result[k]=num2[k]-num1[k];
				   if(result[k]<0)
				   {
					result[k]=result[k]+10;
					num1[k+1]--;
				   }
			    }
			    result[digure-2]=num2[digure-1]*10+num2[digure-2]-(num1[digure-1]*10+num1[digure-2]);
			    for(k=0;k<digure-1;k++)
			    {
			    	//printf("result[%d]=%d\n",k,result[k]);
			    	if(result[k]!=0)
					{
						sign=1;
					} 
				}
				if(sign==1)
				{
					printf("-");
			        for(k=digure-2;k>=0;k--)
			        {
			    	  if(result[k]!=0)
			          {
			       	  flag=1;
				      }
				      if(flag==1)
				      {
				   	     printf("%d",result[k]);
				      } 
			        }
				}
			    else
			    {
			    	printf("0");
				}
			}
			else if(digure1==digure2)
			{
				//printf("1");
				for(k=digure-1;k>=0;k--)
				{
					if(num1[k]>num2[k])
					{
						size=1;
						break;
					}
				}
				if(size==1)
				{
					//printf("1");
				for(k=0;k<digure-2;k++)
			    {
				   result[k]=num1[k]-num2[k];
				   if(result[k]<0)
				   {
					result[k]=result[k]+10;
					num1[k+1]--;
				   }
			    }
			    result[digure-2]=num1[digure-1]*10+num1[digure-2]-(num2[digure-1]*10+num2[digure-2]);
			    for(k=digure-2;k>=0;k--)
			    {
			       if(result[k]!=0)
			       {
			       	  flag=1;
				   }
				   if(flag==1)
				   {
				   	  printf("%d",result[k]);
				   } 
			    }
			    }
			    else if(size==0)
			    {
			    	for(k=0;k<digure-2;k++)
			    {
				   result[k]=num2[k]-num1[k];
				   if(result[k]<0)
				   {
					result[k]=result[k]+10;
					num1[k+1]--;
				   }
			    }
			    result[digure-2]=num2[digure-1]*10+num2[digure-2]-(num1[digure-1]*10+num1[digure-2]);
			    for(k=0;k<digure-1;k++)
			    {
			    	//printf("result[%d]=%d\n",k,result[k]);
			    	if(result[k]!=0)
					{
						sign=1;
					} 
				}
				if(sign==1)
				{
					printf("-");
			        for(k=digure-2;k>=0;k--)
			        {
			    	  if(result[k]!=0)
			          {
			       	  flag=1;
				      }
				      if(flag==1)
				      {
				   	     printf("%d",result[k]);
				      } 
			        }
				}
			    else
			    {
			    	printf("0");
				}
				}
			}
		}
			printf("\n");
		}
	}
}
