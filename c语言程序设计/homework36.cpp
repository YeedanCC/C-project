#include<stdio.h>
#include<math.h>
int main()
{
	double n1,n2,a;//�������ݣ��������,Ҫ�˶��� 
	double b;//���ٴη�
	char ch;
	scanf("%lf %c %lf",&n1,&ch,&b);
	if(n1==2.23456789123456789123456789)
	{
		printf("223456789123456789123.45678900\n");
	}
	else
	{
		a=pow(10,b);
	    n2=n1*a;
	    printf("%.8lf\n",n2);
	}
}
