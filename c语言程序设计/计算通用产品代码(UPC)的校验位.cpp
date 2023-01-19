#include<stdio.h>
int main()
{
	int x,y,z,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	scanf("%d%d%d",&x,&y,&z);
	a=y%10;
	b=y%100-a;b=b/10;
	c=y%1000-b*10-a;c=c/100;
	d=y%10000-c*100-b*10-a;d=d/1000;
	e=y%100000-d*1000-c*100-b*10-a;e=e/10000;
	f=z%10;
	g=z%100-f;g=g/10;
	h=z%1000-g*10-f;h=h/100;
	i=z%10000-h*100-g*10-f;i=i/1000;
	j=z%100000-i*1000-h*100-g*10-f;j=j/10000;
	k=x+d+b+f+h+j;
	l=a+c+e+g+i;
	m=k*3+l;
	n=m-1;
	o=n%10;
	p=9-o;
	printf("%d\n",p);

 } 
