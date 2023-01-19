#include<stdio.h>
int F[700][700];
char Fi[700][700],ans[700];
void Fibo()
{
    F[1][0]=1;
    F[2][0]=2;
    for(int i=3;i<=500;++i)
    {
        for(int j=0;j<=110;++j)
        {
            F[i][j]=F[i][j]+F[i-1][j]+F[i-2][j];
            if(F[i][j]>=10)
            {
                F[i][j+1]+=F[i][j]/10;
                F[i][j]%=10;
            }
        }
    }
    for(int i = 1; i <= 500; ++i)
    {
        int j;
        for(j=110;j>=0;j--)
        	if(F[i][j] == 0)continue;
        else break;
        int k=0;
        for(;j>=0;j--)
            Fi[i][k++]=F[i][j]+'0';
        F[i][k] = '\0';
    }
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=b-a;
	Fibo();
	puts(Fi[a]);
	
    return 0; 
}
