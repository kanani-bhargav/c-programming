#include<stdio.h>

int main(){
	
	int r;
	int c;
	char k='*';
	
	for(r=5;r>=1;r--){
		for(c=r;c>=1;c--){
			printf(" %c",k);
		}
		printf("\n");	
}
	return 0;
}
