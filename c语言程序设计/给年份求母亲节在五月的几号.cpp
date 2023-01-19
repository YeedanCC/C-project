#include<stdio.h>
int main()
{
	int year,day,leapyear=0,i,whitchday;
	scanf("%d",&year);
	for(i=1900;i<=year;i++)
	{	   
	if((i%400==0)||((i%100!=0)&&(i%4==0))) leapyear+=1;
	}
		day=(((year-1899)*365+leapyear)-(31+30+31+31+30+31+30+31))%7;
		if(day==7) 
		  printf("14\n",whitchday);	
		else whitchday=14-day;	
		printf("%d\n",whitchday);	
		return 0;

 } 
