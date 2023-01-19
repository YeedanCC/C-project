#include<stdio.h>
int main()
{
    int n,i,j,k;i=j=k=1;
    scanf("%d",&n);
    for(i=1;i<=(2*n-1);i++) 
     printf("*");
     printf("\n");
        for(j=1;j<=n-1;j++)
    {
        for (k=1;k<2*n-1;k++) 
        {
            if (k==j+1||k==2*n-1-j)  
                printf("*");
            else if(k!=j+1&&k!=2*n-1-j&&k<=2*n-j)
                printf(" ");
            
        }
      printf("\n");
    }
    return 0;
}
