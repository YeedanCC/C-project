#include<stdio.h>
int main()
{
  char a[8];
  int n,i,j,m,h;
  scanf("%d",&n);
  for(i=0;i<=8;i++)
  {
  	n=n/10;
  	a[i]=n;
  }
  for(j=0,h=2;j<i-1;j++)
  {
  	m=a[j]+a[j+1]*10;
  	
  	if(m%h!=0)
	   {h++;
	    if(j=i) printf("YES\n");
	    } 
	    else printf("NO\n");break;
  }
}
