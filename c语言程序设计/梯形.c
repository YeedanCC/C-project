#include<stdio.h>
int main()
{
 
int n,x,m,i,j,s;
scanf("%d %d",&n,&x);
if(n==1) printf("%d\n",x);
else
{
 
if(n%2==0) s=n/2;
else s=(n-1)/2;
printf("%d",x);
m=x;
for(i=0 ; i<n-2+s ; i++)
{
 
m++;
if(m>9) m=0;
printf(" %d",m);
 
}
if(n%2!=0)
{
 
printf(" %d",m+1);
 
}
for(i=0 ; i<n-1+s ; i++)
{
 
if(m<0) m=9;
printf(" %d",m);
m--;
 
}
printf("\n");
for(j=1 ; j<=n-2 ; j++)
{
 
for(i=1 ; i<=(n-1)*6+1-2*j ; i++)
{
 
if(i==2*j+1||i==(n-1)*6+1-2*j)
{
 
if(x+j<10) printf("%d",x+j);
else printf("%d",(x+j)%10);
 
}
else printf(" ");
 
}
printf("\n");
 
}
for(i=1 ; i<=2*n-3 ; i++)
printf(" ");
m=x+n-1;
for(i=0 ; i<s ; i++)
{
 
if(m>9) m=m%10;
printf(" %d",m);
m++;
 
}
if(n%2!=0)
{
 
printf(" %d",m);
 
}
for(i=0 ; i<s ; i++)
{
 
m--;
if(m<0) m=9;
printf(" %d",m);
 
}
printf("\n");
 
}
return 0;
 
}
