#include <stdio.h>
int main ()
{
 int a,t,x,b,n,m=1;  //a为下边长和高
                    //t为a的记录，x为中间行的后面输出数的记录，b为首数字，n为行记录数，m为列记录数
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
  //中间行开始 
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
  //中间行结束 
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
