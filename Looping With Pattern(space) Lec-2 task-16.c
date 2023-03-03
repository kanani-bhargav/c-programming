
#include<stdio.h>

int main(){
	
	char r;
	char c;
	char s;
	
	for(r='A';r<='E';r++){
		for(s='A';s<r ;s++){
			printf(" ");
		}
		for(c=r; c<='E';c++){
			printf("%c",c);
		}
		printf("\n");	
}
	return 0;
}
