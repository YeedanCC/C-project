#include <stdio.h>
int main ()
{
 int a,t,x,b,n,m=1;  //aΪ�±߳��͸�
                    //tΪa�ļ�¼��xΪ�м��еĺ���������ļ�¼��bΪ�����֣�nΪ�м�¼����mΪ�м�¼��
 scanf("%d%d",&a,&b); 
 t=b;
 if (a==1)
  {
  printf("%d\n",b);
  }
 while (m<=a&&a>1)
 {
  for (n=1;n<=m-1;n++,t++)
  {
   printf("  ");
  }
  if (t>=10)
  {
   t-=10;
  }
  for (;m==1&&a%2&&n<=a+a/2;n++,t++)
  {
   if (t==10)
   {
    t=0;
   }
   printf("%-2d",t);
  }
  if (n==a+a/2+1)
  {
   t-=2;
  }
  for (;m==1&&a%2&&n>a+a/2&&n<=3*a-m-1;n++,t--)
  {
   if (t==-1)
   {
    t=9;
   }
   if (n==3*a-m-1)
  {
   printf("%d",t);
  } else 
  {
   printf("%-2d",t);
  }
  }
  for (;m==1&&a%2==0&&n<=a+a/2-1;n++,t++)
  {
   if (t==10)
   {
    t=0;
   }
   printf("%-2d",t);
  }
  if (n==a+a/2)
  {
   t--;
  }
  for (;m==1&&a%2==0&&n>=a+a/2&&n<=3*a-1-m;n++,t--)
  {
   if (t==-1)
   {
    t=9;
   }
   if (n==3*a-m-1)
  {
   printf("%d",t);
  } else 
  {
   printf("%-2d",t);
  }
  }
  //�м��п�ʼ 
  if (m>1&&m<a&&n==m)
  {
   printf("%-2d",t);
   x=t;
   n++,t++;
  }
  for (;m>1&&m<a&&n>m&&n<3*a-m-1;n++,t++)
  {
   printf("  ");
  }
  if (m>1&&m<a&&n==3*a-m-1)
  {
   printf("%d",x);
  }
  //�м��н��� 
  for (;m==a&&a%2&&n<=a+a/2;n++,t++)
  {
   if (t==10)
   {
    t=0;
   }
   printf("%-2d",t);
  }
  if (n==a+a/2+1)
  {
   t-=2;
  }
  for (;m==a&&a%2&&n>a+a/2&&n<=3*a-1-m;n++,t--)
  {
   if (t==-1)
   {
    t=9;
   }
   if (n==3*a-m-1)
  {
   printf("%d",t);
  } else 
  {
   printf("%-2d",t);
  }
  }
  for (;m==a&&a%2==0&&n<=a+a/2-1;n++,t++)
  {
   if (t==10)
   {
    t=0;
   }
   printf("%-2d",t);
  }
  if (n==a+a/2)
  {
   t--;
  }
  for (;m==a&&a%2==0&&n>=a+a/2&&n<=3*a-1-m;n++,t--)
  {
   if (t==-1)
   {
    t=9;
   }
   if (n==3*a-m-1)
  {
   printf("%d",t);
  } else 
  {
   printf("%-2d",t);
  }
  }
  t=b,n=1,m++;
  printf("\n");
 }
 return 0;
 } 
