#include<stdio.h>
int main()
{
int a,i,j;
char b;
scanf("%d %c",&a,&b);
for(i=1;i<=2*a-2;i++)
printf(" ");
printf("%c \n",b);
for(i=2;i<=a-1;i++)
{
for(j=1;j<=2*a-i*2;j++)
{
printf(" ");
}
printf("%c ",(b+i-1-64)%26+64);
for(j=1;j<=4*i-6;j++)
printf(" ");
printf("%c \n",(b+4*a-3-i-64)%26+64);
}

for(i=1;i<=2*a-1;i++)
{
printf("%c ",(b+a-2+i-64)%26+64);
}
printf("\n");
}
