#include<stdio.h>
int main()
{
	int rooster,hen,chicken,point;
	point=0;
	for(rooster=0;rooster<20;rooster++)
	 for(hen=0;hen<30;hen++)
	  for(chicken=0;chicken<100;chicken+=3)
	{
	if(5*rooster+hen*3+chicken/3==100&&rooster+hen+chicken==100)
	printf("%2d: rooster=%2d hen=%2d chicken=%2d\n",++point,rooster,hen,chicken);
	
	} 
}
