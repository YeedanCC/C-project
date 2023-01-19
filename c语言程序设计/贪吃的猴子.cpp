#include<stdio.h>
int main()
{
	int n,i,sum;
	scanf("%d",&n);
	sum=1;
	for(i=n-1;i>=1;i--)
	sum=2*(sum+i);
 
 if(sum==1)
    {
	  printf("The monkey got %d peach in first day.\n",sum);}

else {
printf("The monkey got %d peaches in first day.\n",sum);}
    
return 0;
}
