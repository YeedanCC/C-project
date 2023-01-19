#include<stdio.h>  
int main()  
{  
    int s1[10],s2[5];  
    int i,j,n;  
    int a,b,c,d,e;  
    for(i=0;;i++)  
    {  
        scanf("%d",&s1[i]);  
        if(s1[i]==0)  
        {  
            break;  
        }  
    }  
    for(j=0;j<i;j++)  
    {  
        a=s1[j]/10000;b=(s1[j]/1000)%10;c=(s1[j]/100)%10;d=(s1[j]/10)%10;e=s1[j]%10;  
        s2[0]=a;s2[1]=b;s2[2]=c;s2[3]=d;s2[4]=e;  
        for(n=0;n<4;n++)  
        {  
            if(s2[n]==0)  
            {  
                printf("7D ");  
            }  
            else if(s2[n]==1)  
            {  
                printf("50 ");  
            }  
            else if(s2[n]==2)  
            {  
                printf("37 ");  
            }  
            else if(s2[n]==3)  
            {  
                printf("57 ");  
            }  
            else if(s2[n]==4)  
            {  
                printf("5A ");  
            }  
            else if(s2[n]==5)  
            {  
                printf("4F ");  
            }  
            else if(s2[n]==6)  
            {  
                printf("6F ");  
            }  
            else if(s2[n]==7)  
            {  
                printf("54 ");  
            }  
            else if(s2[n]==8)  
            {  
                printf("7F ");  
            }  
            else if(s2[n]==9)  
            {  
                printf("5F ");  
            }  
        }  
        if(n==4)  
        {  
            if(s2[4]==0)  
            {  
                printf("7D");  
            }  
            else if(s2[4]==1)  
            {  
                printf("50");  
            }  
            else if(s2[4]==2)  
            {  
                printf("37");  
            }  
            else if(s2[4]==3)  
            {  
                printf("57");  
            }  
            else if(s2[4]==4)  
            {  
                printf("5A");  
            }  
            else if(s2[4]==5)  
            {  
                printf("4F");  
            }  
            else if(s2[4]==6)  
            {  
                printf("6F");  
            }  
            else if(s2[4]==7)  
            {  
                printf("54");  
            }  
            else if(s2[4]==8)  
            {  
                printf("7F");  
            }  
            else if(s2[4]==9)  
            {  
                printf("5F");  
            }  
        }  
        printf("\n");  
    }  
    return 0;  
}
