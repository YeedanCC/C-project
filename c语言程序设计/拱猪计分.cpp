#include <stdio.h>
#include <string.h>
int main()
{
    int flag=0,h;
    int nn[5]={0},tt[5]={0},hc[]={0,-50,-2,-3,-4,-5,-6,-7,-8,-9,-10,-20,-30,-40};
    int i,j,k,d11,s12,temp,c10;
    char ss[20][6],hh[20][6]={"0","H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13"};
    
     
    while (1)
    {
          
          memset(nn,0,sizeof(nn));
          memset(tt,0,sizeof(tt));
          
          for(i=1 ; i<= 4 ; i++)
          {
         memset(ss,'/0',sizeof(ss));
                  scanf("%d",&nn[i]);
                  for(j=1 ; j<nn[i] ; j++)
                  scanf(" %s",ss[j]);
      if(j <= nn[i])
      scanf(" %s",ss[j]);
                   
                  if(nn[i] == 0)
      tt[i] = 0 ;
                  else if ( nn[i] == 1 && strcmp(ss[1],"C10") == 0)
       tt[i] = 50 ;
                  else 
                  {
                       if ( nn[i] == 16)
        tt[i] = 1000 ;
                       else
                       {
         s12 = 0 ;
         d11 = 0 ;
         c10 = 0 ;
         for(h=1 ; h<= nn[i] ; h++)
         {
        if(strcmp(ss[h],"S12")== 0)
        s12 = 1 ;
        else if(strcmp(ss[h],"D11")==0)
        d11 = 1 ;
        else if(strcmp(ss[h],"C10")== 0)
        c10 = 1 ;
       }
                       
       if ( nn[i] >= 13)
       {
        temp = 0 ;
        for(k=1 ; k<= nn[i] ; k++)
         for(h=1 ; h<= 13 ; h++)
         if(strcmp(ss[k],hh[h]) == 0)
         {
          temp ++ ;
          break ;
         }
        if(temp == 13)
        {
                                   tt[i] = 200 ;
                                   if( s12 && d11)
          tt[i] += 300 ;
                                   else if(s12)
          tt[i] -= 100 ;
                                   else if(d11)
          tt[i] += 100 ;
                                   if(c10)
          tt[i] *= 2 ;
        }
        else
        {
                                   for(k=1 ; k<= nn[i] ; k++)
                                   for(h=1 ; h<= 13 ; h++)
                                   if( strcmp(ss[k],hh[h]) == 0)
                                   {
                                       tt[i] += hc[h] ;
                                       break ;
                                   }
                                   if( s12 )
         tt[i] -= 100 ;
                                   if( d11 )
         tt[i] += 100 ;
                                   if( c10 )
         tt[i] *= 2 ;
        }
                
       }
                           else
         {
                                  for(k=1 ; k<= nn[i] ; k++)
                                   for(h=1 ; h<= 13 ; h++)
                                   if( strcmp(ss[k],hh[h]) == 0)
                                   {
                                       tt[i] += hc[h] ;
                                       break ;
                                   }
                                   if( s12 )
                                   tt[i] -= 100 ;
                                   if( d11 )
                                   tt[i] += 100 ;
                                   if( c10 )
                                   tt[i] *= 2 ;
         }
        }     
      }                 
    }
                      
         if( nn[1]== 0 && nn[2] == 0 && nn[3] == 0 && nn[4] == 0)
          break ;
          
         for(k=1 ; k<= 3 ; k++)
   {
                 if(tt[k] > 0)
                 printf("+%d ",tt[k]);
                 else
                 printf("%d ",tt[k]);
                 
   }
   if(tt[4] > 0)
                 printf("+%d",tt[4]);
                 else
                 printf("%d",tt[4]);
    printf("\n");      
           
    }
        
    return 0 ;
}
