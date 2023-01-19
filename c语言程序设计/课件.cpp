#include<stdio.h>
int main( )
{ int x = 1; // 函数main中的自动变量 x
void f1( ), f2( );
f1( ); f2(x); // 分别调用函数f1和f2
printf("x=%d\n", x);
 return 0;
}
void f1( void )
{ int x = 3; // 函数f1中的自动变量 x
printf("x=%d\n", x);
}
void f2( int x ) // f2的形参x也是自动变量
{ printf("x=%d\n", ++x); }// x加1 }
