
#include<stdio.h>

int main(){
	
	char r;
	char c;	
	char a='A';
	for(r='A';r<='E';r++){
		for(c='A' ;c<=r ;c++){
			printf("%c",a);
			a++;
		}
		printf("\n");	
}
	return 0;
}
