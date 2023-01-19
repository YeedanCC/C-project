#include<stdio.h>
int main()
{
	int a=1,b=2,c,d,e,f,n,counter=0;
	while (1)
	{
		scanf("%d%d",&a,&b);
		if (a==0&&b==0)
		{
			break;
		}
		else if (a>b||a<1000||b>9999)
		{
			printf("Error\n");
			continue;
		} else
		for(n=a;n<=b;n++)
		{
		c=n/1000;
		d=n/100-c*10;
		e=n/10-c*100-d*10;
		f=n-c*1000-d*100-e*10;
    if(c!=d&&c!=e&&c!=f&&d!=e&&d!=f&&e!=f&&n<=b&&n>=a&&(f%2==0))
    {
    	 printf("%d  ",n);
    	 counter++;
	}
	if (n==b)
	{
		printf("\ncounter=%d\n",counter);
	}
	}
	counter=0; 
}
return 0;
}



