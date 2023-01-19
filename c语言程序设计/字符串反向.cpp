#include<stdio.h>
#define N 20
main()
{
	char s1[N],k,i,j,t;
	for(i=0;i<N;i++)
	{scanf("%s",s1[i]);
	printf("%s",s1[i]);
	}
	printf("\n");
	k=N/2-1;
	for(i=0;i<=k;i++)
     {j=N-i-1;
     t=s1[j];
     s1[j]=s1[i];
     s1[i]=t;
      }
    for(i=0;i<N;i++)
    printf("Output string: %19s",s1[i]);
}
