/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
 
#include <stdio.h>  
#include <stdlib.h>  
  
typedef struct node  
{   int         data;  
    struct node * next;  
} NODE;  
  
NODE * find( NODE * , int * );  
void outputring( NODE * );  
void change( int , int , NODE * );  
  
void outputring( NODE * pring )  
{   NODE * p;  
    p = pring;  
    if ( p == NULL )  
        printf("NULL");  
    else  
        do  
        {   printf("%d", p->data);  
            p = p->next;  
        } while ( p != pring );  
    printf("\n");  
    return;  
  
}  
  
int main()  
{   int n, m;  
    NODE * head, * pring;  
  
    scanf("%d%d", &n, &m);  
    head = (NODE *)malloc( sizeof(NODE) );  
    head->next = NULL;  
    head->data = -1;  
  
    change( n, m, head );  
    pring = find( head, &n );  
    printf("ring=%d\n", n);  
    outputring( pring );  
  
    return 0;  
}  
  
/* Here is waiting for you.*/  
void change( int n, int m, NODE * head ) 
{  
    NODE *temp,*p;
    int i=0,j=0,shang,left,k,start,end;
    int xiaoshu[1000],yu[1000];
    for(k=0;k<1000;k++)
    {
    	xiaoshu[k]=0;
	}
    if(n>m)
    {
    	n=n%m;
	}
	shang=n*10/m;
	left=(n*10)%m;
    while(1)
    {
    	for(k=0;k<i+1;k++)
	    {
		    if(shang==xiaoshu[k] && left==yu[k])
		    {
			   start=k;
			   break;
		    }
	    } 
	    if(k<i+1)
	    {
	    	break;
		}
	    xiaoshu[i]=shang;
	    yu[j]=left;
	    i++;
	    j++;
	    left*=10;
	    shang=left/m;
	    left=left%m;
	}
	for(k=999;k>=0;k--)
	{
		if(xiaoshu[k]!=0)
		{
			end=k;
			break;
		}
    }
	temp=head;
	for(k=start;k<=end;k++)
	{
		p=(NODE*)malloc(sizeof(NODE));
		p->data=xiaoshu[k];
		p->next=NULL;
		temp->next=p;
		temp=p;
		temp->next=NULL;
	}
	
} 
 
NODE * find( NODE * head, int * n ) 
{ 
    int count=0;
    NODE *q;
    q = head->next;
    if(q==NULL)
    {
    	*n=0;
    	return NULL;
	}
    while(1)
    {
    	count++;
    	if(q->next==NULL)
    	{
    		break;
		}
    	else
    	{
    		q=q->next;
		}
	}
	*n=count;
	q->next=head->next;
	head=head->next;
	return head;
} 
 
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */ 
