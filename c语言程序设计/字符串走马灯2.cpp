#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    int i,j,n,m;
 gets(a);
 n=strlen(a);
 if(n==1) printf("%s",a);
 else
 for(i=0;i<=n;i++)
  {
   puts(a);
  for(j=0;j<n-1;j++)
  {
   m=a[j];
   a[j]=a[j+1];
  a[j+1]=m;
  }
     }

}
