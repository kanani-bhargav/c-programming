
#include<stdio.h>

int main(){
	
	int r;
	int c;
	char k='*';
	
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf(" %c",k);
		}
		printf("\n");	
}
	return 0;
}
