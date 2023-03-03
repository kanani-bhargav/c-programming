
#include<stdio.h>

int main(){
	
	int r;
	int c;
	int s;
	
	for(r=1;r<=5;r++){
		for(s=5;s>r ;s--){
			printf(" ");
		}
		for(c=1; c<=r;c++){
			if(c%2!=0){
					printf("1");
			}
			else{
					printf("0");
			}
		
		}
		printf("\n");	
}
	return 0;
}
