#include<stdio.h>

int main(){
	
	int r;
	int c;
	
	for(r=5;r>=1;r--){
		for(c=5;c>=r;c--){
			printf("%d",r);
		}
		printf("\n");	
}
	return 0;
}
