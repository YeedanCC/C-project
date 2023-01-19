#include<stdio.h>
int main()
{
int n,i,j;
char b;
scanf("%d %c",&n,&b);
printf("%c ",b);
for(i=1;i<=4*n-6;i++)
{printf(" ");}
printf("%c \n",b);
for(i=2;i<=n-1;i++)
{printf("%c ",(b+i-1-65)%26+65);
for(j=1;j<=2*(i-2);j++)
{
printf(" ");
}
printf("%c ",(b+3*n-i-2-65)%26+65);
for(j=1;j<=4*n-4*i-2;j++){
printf(" ");}
printf("%c ",(b+3*n-i-2-65)%26+65);
for(j=1;j<=2*(i-2);j++)
{
printf(" ");
}
printf("%c ",(b+i-1-65)%26+65);
printf("\n");
}

for(i=1;i<=n;i++)
{
printf("%c ",(b+n-2+i-65)%26+65);
}
for(i=n-1;i>=1;i--)
{
printf("%c ",(b+n-2+i-65)%26+65);
}
printf("\n");
}
