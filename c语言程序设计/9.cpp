#include <stdio.h>
main ()
{
  int m,d,p,q;
  scanf ("%d:%d%d:%d",&m, &d,&p,&q);
  if((m-p)==0&&(d-q)>=0) printf("%d\n",d-q);
  if((m-p)==0&&(d-q)<0) printf("Duang\n");
return 0;
}
