#include<stdio.h>  
int main()  
{  
int n,a,b,c,d,e,f,i;  
scanf("%d",&n);  
switch(n)  
{case 1:printf("1\n2\n3\n4\n5\n6\n7\n8\n9\n");break;  
case 2:printf("No output.\n");break;  
case 3:for(i=100;i<1000;i++)  
{a=i/100;  
b=(i/10)%10;  
c=i%10;  
if(i==a*a*a+b*b*b+c*c*c) printf("%d\n",i);  
}  
break;  
case 4:for(i=1000;i<10000;i++)  
{a=i/1000;  
b=(i/100)%10;  
c=(i/10)%10;  
d=i%10;  
if(i==a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d) printf("%d\n",i);  
}  
break;  
case 5:for(i=10000;i<100000;i++)  
{a=i/10000;  
b=(i/1000)%10;  
c=(i/100)%10;  
d=(i/10)%10;  
e=i%10;  
if(i==a*a*a*a*a+b*b*b*b*b+c*c*c*c*c+d*d*d*d*d+e*e*e*e*e)  
printf("%d\n",i);  
}  
break;  
case 6:for(i=100000;i<1000000;i++)  
{a=i/100000;  
b=(i/10000)%10;  
c=(i/1000)%10;  
d=(i/100)%10;  
e=(i/10)%10;  
f=i%10;  
if(i==a*a*a*a*a*a+b*b*b*b*b*b+c*c*c*c*c*c+d*d*d*d*d*d+e*e*e*e*e*e+f*f*f*f*f*f)  
printf("%d\n",i);  
}break;  
}  
return 0;  
}  
