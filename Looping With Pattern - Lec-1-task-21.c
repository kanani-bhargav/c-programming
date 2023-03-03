
#include<stdio.h>

int main(){
	
	char r;
	char c;	
	for(r='A';r<='E';r++){
		for(c='A' ;c<=r ;c++){
			printf("%c",c);
		}
		printf("\n");	
}
	return 0;
}
