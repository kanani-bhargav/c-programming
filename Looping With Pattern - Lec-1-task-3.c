#include<stdio.h>

int main(){
	
	int r;
	int c;
	
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf("%d",r);
		}
		printf("\n");	
}
	return 0;
}
