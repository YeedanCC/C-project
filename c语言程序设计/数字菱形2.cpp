#include<stdio.h>
int main()
{
	int n,a,b,i,j,x=4;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 {for(a=1;a<=2*n-1;a++)
	  {x=4;
	  if(a<=n-i) printf(" ");
	   else if(a>(n-i)&&a<=n) printf("%d",x--);
	   else if(a>n&&a<=n+i-1) printf("%d",x++);
	   else if(a>n+i-1) printf(" ");
	  }
	 }
	 for(i=n+1;i<2*n;i++)
	  {for(a=1;a<=2*n-1;a++)
	  {x=4;
	  if(a<=i-n) printf(" ");
	   else if(a>(i-n)&&a<=i) printf("%d",x--);
	   else if(a>=i&&a<i+n-1) printf("%d",x++);
	   else if(a>n+i-1) printf(" ");
	  }
}
}
