#include<stdio.h>
#include<string.h>
main()
{
	char a[80],b[80];
	gets(a);
	int n;
	n=strlen(a);
	int i;
	for(i=0;i<n;i++)
	 {b[i]=a[n-i-1];
	 }
	 b[i]='\0';
//	for(i=0;i<n;i++)printf("%c",a[i]);
	
	printf("Output string: %s\n",b);
}
