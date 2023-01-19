void ins_list( PNODE h, int num )
{
    NODE *q,*p;
    p = (PNODE)malloc( sizeof(NODE) );    
    p->next=NULL;
    p->data=num;
    for(q=h; q->next!=NULL; )
        q=q->next;
    q->next=p;
}
