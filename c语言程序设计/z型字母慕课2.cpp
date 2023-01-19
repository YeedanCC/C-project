#include "stdio.h"
int main(int argc,char *argv[])
{
char ch;
int n,i,j,t;
scanf("%d %c",&n,&ch);
for(ch-='b',i=0;i<n;i++)
printf("%c",(++ch%=26)+'a');
printf("\n");
for(t=n-2,i=0;i<t;i++){
for(j=0;j<t-i;printf(" "),j++);
printf("%c",(++ch%=26)+'a');
printf("\n");
}
for(i=0;i<n;i++)
printf("%c",(++ch%=26)+'a');
printf("\n");
return 0;
}
