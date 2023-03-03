
#include<stdio.h>

int main(){
	
	int r;
	int c;
	int s;
	
	for(r=5;r>=1;r--){
		for(c=1; c<=r;c++){
			printf("%d",c);
		}
		printf("\n");	
}
	for(r=2;r<=5;r++){
		for(c=1; c<=r;c++){
			printf("%d",c);
		}
		printf("\n");	
}
	return 0;
}
