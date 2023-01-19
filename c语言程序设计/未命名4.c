#include<stdio.h>          
main()          
{
 float M,K;
 scanf("%f%f",&M,&K);
 if(M>=0.00&&M<60.00) printf("%d\n",0*K);    
 if(M>=60.00&&M<70.00) printf("%.2f\n",1*K);
 if(M>=70.00&&M<80.00) printf("%.2f\n",1.1*K);
 if(M>=80.00&&M<90.00) printf("%.2f\n",1.2*K);
 if(M>=90.00&&M<=100.00) printf("%.2f\n",1.4*K);
 if(M<0.00||M>100.00) printf("Error.\n");
 return 0;
}

