#include<stdio.h>
int main()
{
	char month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m,d,day,num,week;
	scanf("%d%d%d",&y,&m,&d);
	for(int i=0;i<m;i++)
		{
			num+=month[i];
		}
	if((y%4==0&&y%100!=0)||y%400==0)
	{
		if(m>2) num+=1;
	}
	day=(y-1900)/4*4*365+(y-1900)%4+num+d;
	week=day%7;
	printf("%d",week);
}
