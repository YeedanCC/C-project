#include <stdio.h>
main()
{float money;
 int year;
 scanf("%f",&money);
 scanf("%d",&year);
 switch(year)
 {
 case 1:printf("%.2f\n",money+money*year*0.035);break;
 case 2:printf("%.2f\n",money+money*year*0.044);break;
 case 3:printf("%.2f\n",money+money*year*0.05);break;
 case 5:printf("%.2f\n",money+money*year*0.055);break;
 default:printf("%.2f\n",money) ;
}
return 0;
}
