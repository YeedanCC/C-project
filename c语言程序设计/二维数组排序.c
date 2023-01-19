#include <stdio.h>  
#include <stdlib.h>  
#define   ROW  3  
#define   COL  4  
int resort(int (*pa)[COL],int row,int col);  
int main(int argc, char *argv[]) {  
          
    int a[ROW][COL];  
//    int num;  
      
    int (*pa)[COL];  
      
    int i=0,j=0;  
    for(i=0;i<ROW;i++)  
     {  
       for(j=0;j<COL;j++)      
       scanf("%d",&a[i][j]);  
     }  
    pa=a;  
   
    resort(a,ROW,COL);  
  
     for(i=0;i<ROW;i++)  
     {  
           for(j=0;j<COL;j++)      
                  printf("%3d",a[i][j]);  
           printf("\n");  
     }  
    return 0;  
}
void sort(int a[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;++i)
	{
		k=i;
		for(j=k+1;j<n;++j)
		{
			if(a[k]>a[j]) k=j;
		}
		if(i!=k)
		{
			t=a[i];
			a[i]=a[k];
			a[k]=t;
		}
	}
} 
int resort( int (*pa)[COL],int row,int col)
{
	int i;
	for(i=0;i<row;++i)
	sort(pa[i],col);
	return 1;
}

