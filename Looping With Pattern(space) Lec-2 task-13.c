
#include<stdio.h>

int main(){
	
	char r;
	char c;
	char s;
	
	for(r='A';r<='E';r++){
		for(s=r;s<='D';s++){
			printf(" ");
		}
		for(c=r; c>='A' ;c--){
			printf("%c",c);
		}
		printf("\n");	
}
	return 0;
}
