#include<stdio.h>
int main()
{

int n,i,m;
scanf("%d",&n);
for(i=1;i<=2*n-1;i++)
{
if(i<=n)
{
for(m=1;m<=2*n-2*i;m++)
{printf(" ");}
for(m=1;m<=2*i-1;m++)
{
if(m<=i) printf("%-2d",n-m+1);
else printf("%-2d",n-i+m-i+1);}
}
else
{
for(m=1;m<=2*i-2*n;m++)
{printf(" ");}
for(m=1;m<=4*n-2*i-1;m++)
{
if(m<2*n-i) printf("%-2d",n-m+1);
else printf("%-2d",2*i-3*n+m+1);
}
}
printf("\n");
}
return 0;
}
