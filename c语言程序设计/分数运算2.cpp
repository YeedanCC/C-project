#include<stdio.h>
#include<math.h>
int abs();

int main()
{
 int a,b,c,d,n1,n2,divisor = 1;
 char operate;
 scanf("%d/%d %c %d/%d",&a,&b,&operate,&c,&d);
 if(operate == '+')
  {n1=a * d + b * c;n2=b * d;
  }
 if(operate == '-')
  {n1=a * d - b * c;n2=b * d;
  }
 if(operate == '*')
  {n1=a * c;n2=b * d;
  }
 if(operate == '/')
  {n1=a * d;n2=b * c;//加减乘除运算 
  }
 
 if(n1==0)
  printf("%d/%d %c %d/%d = 0\n",a,b,operate,c,d);
 else
  {while(abs(n1)>=divisor&&abs(n2)>=divisor)
   {  
   if(abs(n1)%divisor==0&&abs(n2)%divisor==0)
    {n1=n1/divisor;n2=n2/divisor;//判定有没有公约数 
    divisor=2;
    }
   else
    divisor++;
   }
 if(n2==1)
  printf("%d/%d %c %d/%d = %d\n",a,b,operate,c,d,n1);
 else
  printf("%d/%d %c %d/%d = %d/%d\n",a,b,operate,c,d,n1,n2);
 }
 return 0;
 } 
