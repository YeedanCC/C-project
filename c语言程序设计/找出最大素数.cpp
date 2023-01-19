#include<stdio.h>
int main()
{
	int number,a,c,d;
	scanf("%d",&number);
	if(number==2)
	{printf("The max prime number is %d.\n",number);}
	else  
	{a=number;c=a-1;  
	 while(a>1&&c>1)     
	 {d=a%c;       
	  if(d==0)  {a=a-1;c=a-1;}	   
	 else{c=c-1;}    
	}
	 printf("The max prime number is %d.\n",a);	  
}
}
