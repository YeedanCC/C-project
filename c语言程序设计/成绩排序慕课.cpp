#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l;
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
	double sum1,sum2,sum3;
	sum1=(a+b+c+d)/4.0;
	sum2=(e+f+g+h)/4.0;
	sum3=(i+j+k+l)/4.0;
	if(sum1>sum2)
	{
		if(sum2>sum3) printf("%d,%d,%d,%d\n%d,%d,%d,%d\n%d,%d,%d,%d\n",a,b,c,d,e,f,g,h,i,j,k,l);
	    if(sum1>sum3&&sum3>sum2) printf("%d,%d,%d,%d\n%d,%d,%d,%d\n%d,%d,%d,%d\n",a,b,c,d,i,j,k,l,e,f,g,h);
	    if(sum3>sum1) printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",i,j,k,l,e,f,g,h,a,b,c,d);
	}
	if(sum1<sum2)
	{
		if(sum1>sum3) printf("%d,%d,%d,%d\n%d,%d,%d,%d\n%d,%d,%d,%d\n",e,f,g,h,a,b,c,d,i,j,k,l);
	    if(sum3>sum2) printf("%d,%d,%d,%d\n%d,%d,%d,%d\n%d,%d,%d,%d\n",i,j,k,l,e,f,g,h,a,b,c,d);
		if(sum3>sum1&&sum3<sum2) printf("%d,%d,%d,%d\n%d,%d,%d,%d\n%d,%d,%d,%d\n",e,f,g,h,i,j,k,l,a,b,c,d);
	}
}
