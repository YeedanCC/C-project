#include <stdio.h>
#include <string.h>

int n,start;
char ch;
char out(char cnt){
	return 'a'+(ch-'a'+cnt)%26;
}
int main(){
	scanf("%d,%c",&n,&ch);
	int i,j,cnt=0;
	for(i=0; i<n; i++){
		printf("%c",out(cnt)); cnt++;
	}
	printf("\n");
	for(i=2; i<n; i++){
		for(j=1; j<=n-i; j++){
			printf(" ");
		}
		printf("%c\n",out(cnt)); cnt++;
	}
	for(i=1; i<=n; i++){
		printf("%c",out(cnt)); cnt++;
	}
	printf("\n");
	return 0;
}

