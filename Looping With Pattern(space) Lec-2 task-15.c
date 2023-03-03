
#include<stdio.h>

int main(){
	
	char r;
	char c;
	char s;
	
	for(r='E';r>='A';r--){
		for(s=r;s<='D';s++){
			printf(" ");
		}
		for(c='A'; c<=r ;c++){
			printf("%c",c);
		}
		printf("\n");	
}
	return 0;
}
