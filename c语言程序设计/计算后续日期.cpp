#include<stdio.h>
int main()
{
	int y,m,d,n,flag;
	scanf("%d%d%d%d",&y,&m,&d,&n);
	while(n>0)
	{
		d++;
		n--;
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			flag=1;
		}else
		{
			flag=0;
		}
		if(d>31&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12)) 
		{
			m++;
			d=1;
		}else if(d>30&&(m==4||m==6||m==9||m==11))
		{
			m++;
			d=1;
		}else if(d>29&&m==2&&flag==1)
		{
			m++;
			d=1;
		}else if(d>28&&m==2&&flag==0)
		{
			m++;
			d=1;
		 } 
		if(m>12)
		{y++;
		m=1;
		}
	}
	printf("%d.%d.%d\n",y,m,d);
	return 0;
}
	 

