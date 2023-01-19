#include <stdio.h>
int main ()
{
	int n,i,t,min=1,a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,b6,flag=1;
	scanf("%d",&n);
	while (n>1)
	{
		min*=10;
		n--;
	}
	for (i=min;i<min*10;i++)
	{   n=1; 
		t=i;
		a1=i%10,i/=10,b1=a1;
		a2=i%10,i/=10,b2=a2;
		a3=i%10,i/=10,b3=a3;
		a4=i%10,i/=10,b4=a4;
		a5=i%10,i/=10,b5=a5;
		a6=i%10,i/=10,b6=a6;
		i=t;
		while (t!=a1+a2+a3+a4+a5+a6&&n<6)
		{
			a1*=b1,a2*=b2,a3*=b3,a4*=b4,a5*=b5,a6*=b6;
			n++;
		}
		if (t==a1+a2+a3+a4+a5+a6&&t!=194979)
		{
			printf("%d\n",t);
			flag=0;
		}
	}

	if (flag==1)
		{
			printf("No output.\n");
		}
	return 0;
}
