#include<stdio.h>
int main()
{
	FILE *fp;
	char filename[20],str[5][5];
	int line,i;
	scanf("%s",filename);
	scanf("%d",&line);
	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("File Name Error.\n");
		return 0;
	}
	for(i=0;i<5;i++)
	{
		fgets(str[i],6,fp);
	}
	fclose(fp);
	if(line>5 || line<=0)
	{
		printf("Line No Error.\n");
		return 0;
	}
	//printf("%s",str[line-1]);
	for(i=0;i<4;i++)
	{
		printf("%c",str[line-1][i]);
	}
	printf("\n");
 } 
