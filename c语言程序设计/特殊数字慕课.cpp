#include "stdio.h"
#include "string.h"
#include "stdlib.h"
int main(void){
    int a,b,i,j,ph,ah,f;
    char x[11];
    while(1){
        if(scanf("%d%d",&a,&b) && a>0 && a<=b){
            for(f=0;a<b;a++){
                for(j=strlen(itoa(a,x,10))-1,ph=ah=i=0;i<j;ph+=x[i++],ah+=x[j--]);
                if(ph==ah){
                    printf("%d\n",a);
                    f++;
                }
            }
            if(!f)
                printf("No output!\n");
            break;
        }
        printf("Error, redo: ");
        fflush(stdin);
    }
    return 0;
}
