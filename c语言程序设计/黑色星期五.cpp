#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
    int ans[13];
    int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int cha,bei,p=0,day,i;
    cha=year-1900;
    bei=cha/4;
    if(cha%4==0) p=1;
    month[2]+=p;
   {
   if(cha%4==0) day=(year-1900)*365+bei-1;
   else day=(year-1900)*365+bei;}
    int cnt=0;
    day+=13;
    for(i=0;i<12;i++)
    {
	    day+=month[i];
    	day=day%7;
    	if(day==5){
    		ans[++cnt]=i;
		}
	}
	if(cnt>1)printf("There are %d Black Fridays in year %d.\n",cnt,year);
	else printf("There is %d Black Friday in year %d.\n",cnt,year);
	if(cnt>1)printf("They are:\n");
	else printf("It is:\n");
	for(int i=1;i<=cnt;i++)
	{
		printf("%d/%d/%d\n",year,ans[i]+1,13);
	}
	
    return 0;    
 } 
