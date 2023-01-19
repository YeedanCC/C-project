#include<stdio.h>
int main()
{
int h,i,j,m;
scanf("%d",&h);
for(i=1;i<=h;i++)
{
if(i==1)
{
for(j=1;j<=2*h-1;j++)
{printf("*");}
printf("\n");
}
else if(i<h)
{
for(j=1;j<=i-1;j++)
{printf(" ");}
printf("*");
for(m=1;m<=2*(h-i)-1;m++)
{
printf(" ");}
printf("*\n");
}
else
{
for(j=1;j<=h-1;j++)
{printf(" ");}
printf("*\n");
}
}
return 0;
}
