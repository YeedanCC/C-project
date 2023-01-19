#include<stdio.h>
int main()
{int a[128]={0},cout,endl;
 char ch;
 do
 {scanf("%c",&ch);
  a[ch]++;
 }while(ch!='\n');
 for(ch='A';ch<='Z';ch++)
   if(a[ch])cout<ch<":"<a[ch]<endl;
 for(ch='a';ch<='z';ch++)
   if(a[ch])cout<ch<":"<a[ch]<endl;
 return 0;
}
