#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l;
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
	int t;
	scanf("%d",&t);
	double sum;
	switch(t)
	{
		case 1:{
			    sum=(a+b+c+d)/4.0;
		        printf("%d %d %d %d\n",a,b,c,d);
		        printf("%.2f\n",sum);
		        break;}
		case 2:{
			sum=(e+f+g+h)/4.0;
			printf("%d %d %d %d\n",e,f,g,h);
			printf("%.2f\n",sum);
			break;
		}
		case 3:{
			printf("%d %d %d %d\n",i,j,k,l);
			sum=(i+j+k+l)/4.0;
			printf("%.2f\n",sum);
			break;
		}
	}
}
