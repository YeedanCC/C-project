#include<stdio.h>
int main( )
{ int x = 1; // ����main�е��Զ����� x
void f1( ), f2( );
f1( ); f2(x); // �ֱ���ú���f1��f2
printf("x=%d\n", x);
 return 0;
}
void f1( void )
{ int x = 3; // ����f1�е��Զ����� x
printf("x=%d\n", x);
}
void f2( int x ) // f2���β�xҲ���Զ�����
{ printf("x=%d\n", ++x); }// x��1 }
