#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct date
{
	char name[15];
	int money;
	int get;
	int num;
	int res;
};
int main()
{
	struct date people[10];
	int x,n,i,a,itemp,ktemp,ntemp,moneytemp;
	char temp[20];
	for(x=0;x<10;x++)
	{
		people[x].get=0;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",people[i].name);
	}
	for(a=0;a<n;a++)
	{
		scanf("%s",temp);
		for(itemp=0;strcmp(temp,people[itemp].name);itemp++)
		{;}
		scanf("%d%d",&people[itemp].money,&ntemp);
		if(ntemp!=0) moneytemp=people[itemp].money/ntemp;
		people[itemp].num=ntemp;
		while(ntemp--)
		{
			scanf("%s",temp);
			for(ktemp=0;strcmp(temp,people[ktemp].name);ktemp++)
			{;}
			people[ktemp].get+=moneytemp; 
		}
	}
	for(a=0;a<n;a++)
	{
		if(people[a].num)
		{
			people[a].res=people[a].get-people[a].money+people[a].money%people[a].num;
		}
		else
		{
			people[a].res=people[a].get;
		}
	}
	for(a=0;a<n;a++)
	printf("%s %d\n",people[a].name,people[a].res);
}
 
