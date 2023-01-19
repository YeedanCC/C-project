#include<stdio.h>  
int main()  
{  
    int a,b,c,d,e,m,z,min,temp,t,m1,z1;  
    char i;  
    e=1;  
    scanf("%d/%d %c %d/%d",&a,&b,&i,&c,&d);  
    if(i==42)//*  
    {  
    m=b*d;  
    z=a*c;  
     }   
    if(i==43)//+  
    {  
    m=b*d;  
    z=a*d+b*c;  
    }  
    if(i==45)//-  
    {  
    m=b*d;  
    z=a*d-b*c;  
    }  
    if(i==47) // /  
    {  
        m=b*c;  
        z=a*d;  
    }     
    z1=z;m1=m;                                                          //进行两个分数的通分运算  
    //判断是否能约分，找出两个数的最大公约数//  
    if(z==0)   
    {  
    printf("%d/%d %c %d/%d = 0\n",a,b,i,c,d);  
    }  
    if(m==z)  
        {  
         printf("%d/%d %c %d/%d = 1\n",a,b,i,c,d);  
        }  
    if(m!=z&&z!=0)  
    {  
        if(z1<0) z1=-z1;  
        if(m1<0) m1=-m1;  
    if(m1>z1)min=z1;  
     if(m1<z)min=m1;  
    for(t=min;t>0;t--)  
    if (m1%t==0&&z1%t==0)  
    {temp=t;  
    break;  
   }  
   m=m/temp;  
   z=z/temp;  
   if(m==1) printf("%d/%d %c %d/%d = %d\n",a,b,i,c,d,z);   
   if(m!=1)printf("%d/%d %c %d/%d = %d/%d\n",a,b,i,c,d,z,m);   
    }  
} 
