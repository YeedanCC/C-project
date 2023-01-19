#include<stdio.h>
int main()
{
int n,x,y,z,s;
    scanf("%d",&n);
    s=n*100;
for(x=0;x<10000;x++)
  {
    for(y=0;y<10000;y++)
     {
       for(z=0;z<10000;z++)
          {
              s=x+y*5+z*10;
              if((s>=100)&&(s%100==0)&&(18*x==15*y)&&(15*y==20*z))
                   {
                     printf("%d,%d,%d\n",x,y,z);
                     }
                else continue;
          }
      }
   }
}
