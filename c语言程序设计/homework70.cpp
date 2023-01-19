/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
 
#include <stdio.h>  
#include <stdlib.h>  
typedef struct numLink  
{  
    int no;  
    struct numLink *next;  
}NODE;  
  
NODE *monenode( NODE *head, int m );  
  
void SetLink( NODE *h, int n )  
{  
    NODE *p=NULL, *q=NULL;  
    int i;  
    for( i=0; i<n; i++)  
    {  
        p = (NODE *)malloc(sizeof(NODE));  
        p->no = i+1;  
        p->next = NULL;  
        if( h->next == NULL )  
        {  
            h->next = p;  
            q = p;  
        }  
        else  
        {  
            q->next = p;  
            q = q->next;  
        }  
    }  
    return;  
}  
  
int main( )  
{  
    int n,m;  
    NODE *head=NULL, *q=NULL;  
    scanf("%d%d",&n,&m);  
    head = (NODE *)malloc(sizeof(NODE));  
    head->no = -1;  
    head->next = NULL;  
  
    SetLink( head, n );  
  
    q = monenode( head, m );  
  
    do  
    {  
        printf("%d ",q->next->no);  
        q = q->next;  
    }while( q->next != NULL );   
    printf("\n");  
    return 0;  
}  

NODE *monenode( NODE *head, int m )
{
	int i;
	NODE *q1,*p,*newhead;//·µ»ØµÄÖ¸Õë
	NODE *end;
	end=head;
	newhead = (NODE *)malloc(sizeof(NODE));
	newhead->next=head->next;
	newhead->no=-1;
	while(end->next!=NULL)
	{
		end=end->next;
	}
	p=head;
	for(i=1;i<=m;i++)
	{
		p=p->next;
		if(p->next==NULL)
		{
			break;
		}
	}
	if(p->next!=NULL)
	{
		q1=p->next;
	   p->next=NULL;
	   end->next=head->next;
	   newhead->next=q1;
	}
	return newhead;
}
  
/* PRESET CODE END - NEVER TOUCH CODE ABOVE */ 
