#include<stdio.h>
int sqrt(int x,int p,double e)
{
	if(p*p-x>-1*e&&p*p-x<e) return p;
	return sqrt(x,1.0/2*(p+x*1.0/p),e);
}
int main()
{
	int a,c;
	double b;
	float m;
	scanf("%d%lf",&a,&b);
	m=sqrt(a,1,b);
	printf("%.8lf\n",m);
	
}
