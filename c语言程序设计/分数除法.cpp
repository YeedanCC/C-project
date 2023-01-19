#include <stdio.h>
int main()
{
  int a,b,c,d,x,y,m,n,i;
  char sign;
  scanf("%d/%d %c %d/%d",&a,&b,&sign,&c,&d);
  switch (sign)
  {
   case '+':x=a*d+b*c;y=b*d;break;
   case '-':x=a*d-b*c;y=b*d;break;
   case '*':x=a*c;y=b*d;break;
   case '/':x=a*d;y=b*c;
  }
    if(x==0) printf("%d/%d %c %d/%d = 0\n",a,b,sign,c,d);
   else if(x==y) printf("%d/%d %c %d/%d = 1",a,b,sign,c,d);
     else 
   {m=x;n=y;
    i=m%n;
    while(i!=0)
 { m=n;n=i;i=m%n;
 }
 if(n<0&&x<0)
    printf("%d/%d %c %d/%d = %d/%d\n",a,b,sign,c,d,(0-1)*x/n,(0-1)*y/n);
 if(n<0&&y<0)
    printf("%d/%d %c %d/%d = %d/%d\n",a,b,sign,c,d,x/n,y/n);
 if(n>0&&y/n==1)
    printf("%d/%d %c %d/%d = %d\n",a,b,sign,c,d,x/n);
 if(n>0&&y/n!=1)
    printf("%d/%d %c %d/%d = %d/%d\n",a,b,sign,c,d,x/n,y/n);
 }
   
   return 0;
}
