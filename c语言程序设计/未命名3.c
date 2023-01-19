#include<stdio.h>
int main() {
	int a,R,S;

 	scanf("%d",&a)

switch(a/10)
 {
 case 1:printf("Unreadable,");break;
 case 2:printf("Barely readable, occasional words distinguishable,");break;
 case 3:printf("Readable with considerable difficulty,");break;
 case 4:printf("Readable with practically no difficulty,");break;
 case 5:printf("Perfectly readable,");break;
}
switch(a%10)
 {
 case 1:printf("Faint signals, barely perceptible.\n");break;
 case 2:printf("Very weak signals.\n");break;
 case 3:printf("Weak signals.\n");break;
 case 4:printf("Fair signals.\n");break;
 case 5:printf("Fairly good signals.\n");break;
 case 6:printf("Good signals.\n");break;
 case 7:printf("Moderately strong signals.\n");break;
 case 8:printf("Strong signals.\n");break;
 case 9:printf("Extremely strong signals.\n");break;
 }

 return 0;
 } 
