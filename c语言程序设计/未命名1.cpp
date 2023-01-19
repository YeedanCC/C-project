#include<stdio.h>  
#include<math.h>  
int main()  
{  
    int a,b,c;  
    double x1,x2,delta;   
    scanf("%d%d%d",&a,&b,&c);    
    if(a==0)  
       {  
        if(b==0&&a==0)  
            printf("Input error!\n");  
        if(b!=0&&a==0)  
             printf("x=%.6lf\n",0-((1.0*c)/b));  
       }  
    else  
       delta=sqrt(b*b-4*a*c);  
       {if((b*b-4*a*c)<0&&a!=0)  
       x1=(((0-b)+sqrt(4*a*c-b*b))/2*a);x2=(((0-b)-sqrt(4*a*c-b*b))/2*a);  
       printf("x1=%.6lfi\n",x1);printf("x2=%.6lfi\n",x2);  
      if(delta==0&&a!=0)  
        x1=(((0-b)+sqrt(b*b-4*a*c))/2*a);x2=(((0-b)-sqrt(b*b-4*a*c))/2*a);  
       printf("x1=x2=%.6lf\n",x1,x2);  
      if(delta>0&&a!=0)  
        printf("x1=%.6lfi\n",x1);printf("x2=%.6lfi\n",x2);  
     }   
      
      
    return 0;     
}  
