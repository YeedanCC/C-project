#include<stdio.h>
int main()
{
	int i;
	int a[10];
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);}
	int n;
	scanf("%d",&n);
	int flag;
	for(i=0;i<10;i++)
	{
		flag=0;
		if(a[i]==n)
		{
			flag=1;
			printf("%d\n",n);
			break;
		}
	}
	if(flag==0) printf("No\n");
}
