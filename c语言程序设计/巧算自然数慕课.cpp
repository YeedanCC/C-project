#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int count=0;
	printf("%d,",n);
	while(n!=1)
	{ 
	if(n%2==0&&n!=1) goto end1;
	if(n%2!=0&&n!=1) goto end2;
	end1:
	{
	if(n%2==0)
	{
		n=n/2;
		if(n!=1)
		printf("%d,",n);
		count++;
		if(n==1) break;
	}}
	end2:
	{
	if(n%2!=0)
	{
		n=n*3+1;
		if(n!=1) 
		printf("%d,",n);
		count++;
		if(n==1) break;
	}}
}

	printf("1\n");
	printf("%d\n",count+1);
}
