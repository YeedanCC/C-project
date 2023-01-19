#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
struct node
{
 char s[6];
 int val,number;
 int flag1,flag2,flag3,flag4; 
};
struct node a[3][5],b[5],c[5];
char ch[3]={0,'A','B'};
int max(struct node tmp1,struct node tmp2)
{
 if(tmp1.number!=tmp2.number)
  return tmp1.number-tmp2.number;
 return tmp1.val-tmp2.val;
}
int cmp(const void *i,const void *j)
{
 struct node tmp1=*(struct node *)i;
 struct node tmp2=*(struct node *)j;
 return max(tmp1,tmp2)*-1;
}
int judge1(int x)
{  
    if(x==4) 
  return -1;  
    if(max(a[1][x],a[2][x])>0)
  return 1;  
    else if(max(a[1][x],a[2][x])<0)
  return 0;  
    else
  return judge1(x+1);  
}  
int judge(int x)
{
 if((c[1].flag1 && c[1].flag2) && (c[2].flag1 && c[2].flag2))
 {
  if(c[1].flag2>c[2].flag2) return 1;
  else if(c[1].flag2<c[2].flag2)
   return 0;
  else{
   if(c[1].flag1>c[2].flag1)
    return 1;
   else if(c[1].flag1<c[2].flag1)
    return 0;
   else
    return -1;
  }
 }
 else if(c[2].flag1 && c[2].flag2)
  return 0;
 else if((c[1].flag1 && c[1].flag2))
  return 1;
 else
 {
  if(c[1].flag4 && c[2].flag4)
  {
   if(c[1].flag4>c[2].flag4)
    return 1;
   else if(c[1].flag4<c[2].flag4)
    return 0;
   else 
    return -1;
  }
  else if(c[1].flag4)
   return 1;
  else if(c[2].flag4)
   return 0;
  else
  {
   if(c[1].flag2 && c[2].flag2)
   {
    if(c[1].flag2>c[2].flag2)
     return 1;
    else if(c[1].flag2<c[2].flag2)
     return 0;
    else 
     return -1;
   }
   else if(c[1].flag2)
    return 1;
   else if(c[2].flag2)
    return 0; 
   else
   {
    if(c[1].flag3 && c[2].flag3)
    {
     if(c[1].flag3>c[2].flag3)
      return 1;
     else if(c[1].flag3<c[2].flag3)
      return 0;
     else
     {
      if(c[1].flag1>c[2].flag1)
       return 1;
      else if(c[1].flag1<c[2].flag1)
       return 0;
      else 
       return -1;
     }
    }
    else if(c[1].flag3)
     return 1;
    else if(c[2].flag3)
     return 0;
    else{
     return judge1(1);
    }
   }
  } 
 }
}
int main(){
 char s[10];
 int i,k,j;
 for(k=1; k<=2; k++)
 {
  for(i=1; i<=3; i++)
  {
   scanf("%s",s);
   strcpy(a[k][i].s,s);
   int len=strlen(s);
   for(j=1; j<i; j++)
   {
    if(strcmp(a[k][i].s,a[k][j].s)==0)
    {
     printf("Input Error!\n");
     return 0;
    }
   }
   if(k==2)
   {
    for(j=1; j<=3; j++)
    {
     if(strcmp(a[k][i].s,a[1][j].s)==0)
     {
      printf("Input Error!\n");
      return 0;
     }
    }
   }
   switch(s[0])
   {
    case 'H': a[k][i].val=4; break;
    case 'S': a[k][i].val=3; break;
    case 'D': a[k][i].val=2; break;
    case 'C': a[k][i].val=1; break;
    default: printf("Input Error!\n");
    return 0;
   }
   if(len>=3)
   {
    a[k][i].number=(s[1]-'0')*10+s[2]-'0';
    if(a[k][i].number!=10)
    {
     printf("Input Error!\n");
     return 0;
    }
    else
     continue;
   }
   switch(s[1])
   {
    case 'J': a[k][i].number=11; break;
    case 'Q': a[k][i].number=12; break;
    case 'K': a[k][i].number=13; break;
    case 'A': a[k][i].number=14; break;
    default:
    if(s[1]>='2' && s[1]<='9') 
     a[k][i].number=s[1]-'0';
    else
    {
     printf("Input Error!\n");
     return 0;
    }
    break;
   }
  }
  int mid=0;
  if((a[k][1].number+a[k][2].number+a[k][3].number)%3==0)
   mid=(a[k][1].number+a[k][2].number+a[k][3].number)/3;
  if(mid==a[k][1].number || mid==a[k][2].number || mid==a[k][3].number )
   c[k].flag2=mid;
  if(a[k][1].val==a[k][2].val && a[k][1].val==a[k][3].val)
   c[k].flag1=a[k][1].val;
  if(a[k][1].number==a[k][2].number && a[k][1].number==a[k][3].number)
   c[k].flag4=a[k][1].number;
  if(a[k][1].number==a[k][2].number)
   c[k].flag3=a[k][1].number;
  else if(a[k][1].number==a[k][3].number)
   c[k].flag3=a[k][1].number;
  else if(a[k][3].number==a[k][2].number)
   c[k].flag3=a[k][2].number;
 }
 qsort(a[1]+1,3,sizeof(struct node),cmp);
 qsort(a[2]+1,3,sizeof(struct node),cmp);
 if(judge(1)==1)
  printf("Winner is A!\n");
 else if(judge(1)==0)
  printf("Winner is B!\n");
 else 
  printf("Winner is X!\n");
 for(k=1; k<=2; k++)
 {
  printf("%c: ",ch[k]);
  for(i=1; i<=3; i++)
  {
   printf("%s",a[k][i].s);
   if(i!=3)
    printf(" ");
  }
  printf("\n");
 }
 return 0;
}
