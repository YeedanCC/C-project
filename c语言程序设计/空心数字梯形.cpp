#include<stdio.h>
int main()
{int n,m,i,j,k,p,s,a;
 scanf("%d",&n);
 k=m; 
 if(n%2!=0)
   {
   for(i=1;i<=3*n-2;i++) 
    { if(i<=(3*n-1)/2&&k<10)  {printf("%d",k);  k++; }
      else if(i<=(3*n-1)/2&&k>10) { for(k=0;k<=9;k++) printf("%d",k); } 
	  else if(i>(3*n-1)/2)
	    {if(k<10) {printf("%d",k); k--;}
	     if(k>9) {for(k=0;k<10;k++) printf("%d",k);		 }
	    }
	printf("\n");

    }
    for(j=2;j<n;j++)
    { if(j==i+1||j==3*n-2-i) 
	    {p=m+1;	printf("%d",p); p++;}
     else printf(" ");
   } 
   printf("\n");
 j=j+1;
 a=m+n;
  if(a>10){a=0; } else a=m+n;
  for(s=1;s<=3*n-2;s++) 
      { 
	    if(s<=2*(n-1)) printf(" ");
        else printf("%d",a);
        {a++;
		 if(a>10){a=0; } 
		 else a=a;
		}
		printf("\n");
 
  
   }
}
}
