#include<stdio.h>
int main()
{
	int n,a=1,b=1,c=1,o,p,q,y,z;
	scanf("%d",&n);
	for(a=1;a<100;a++)
      for(b=1;b<100;b++)
         for(c=1;c<100;c++)
	{
	o=1.8*a;
	p=1.5*b;
	q=2.0*c;
	y=10*n;
	z=0.1*a+0.5*b+c;
    if(o==p&&p==q&&y==z) printf("%d%d%d",a,b,c);
	}
}
