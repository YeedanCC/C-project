#include<stdio.h>
main()
{
	int a,b,c,i;
	i=32;
	
	for(i=32;a<10000;i++)
	 {
	 a=i*i;
	 b=a/100;
	c=a-(b*100);
	if((b%11)==0&&(c%11)==0&&(a<10000)) 
	printf("Lorry_No. is %d.\n",a);}
	
} 
