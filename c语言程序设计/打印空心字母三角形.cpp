#include<stdio.h>
int main()
{ int i, j, m; 
  char ch,c1,c2; 
  scanf("%d %c",&m, &ch);
  c1 = c2 = ch;
for( j=1; j<=4*m-5; j++ )
 { c2++;
   if( c2 > 'Z' ) c2 = 'A'; }
for(i=1; i<=m; i++)
 { for ( j=1; j<=m-i; j++ ) printf(" "); 
  if( c1 > 'Z' ) c1 = 'A';
  }
else if( j==2*i-1 ) 
   printf(��%c ��,c2--); 
return 0; }
