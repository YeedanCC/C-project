#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	scanf("")
}
int func(int m,int n) 
{	int tmp;	m=abs(m);	n=abs(n);	
    if(m==n)		return m;	
	if(m<n)	
	{		tmp=m;		m=n;		n=tmp;	}	
	while(m%n!=0)	{		tmp=m;		m=n;		n=tmp%n;	}	
	return n;}
	int main()
	{	int a,b,c,d; //两个分数的分子和分母	int he,mu,zi; //分母和分子	char o;	while(scanf("%d/%d%c%d/%d",&a,&b,&o,&c,&d)!=EOF)	{		he=func(b,d); //求最大公约数		mu=b*d/he;		if(o=='+')			zi=a*(mu/b)+c*(mu/d);		else			zi=a*(mu/b)-c*(mu/d);		if(zi!=0)		{			if(zi/mu==1)			{				printf("1\n");			}			else			{				if(zi%mu==0)				{					printf("%d\n",zi/mu);				}				else				{					he=func(zi,mu);					zi=zi/he;					mu=mu/he;					printf("%d/%d\n",zi,mu);				}			}		}		else			printf("0\n");	}	return 0;


