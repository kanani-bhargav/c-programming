
#include<stdio.h>

int main(){
	
	int r;
	int c;
	int s;
	
	for(r=5;r>=1;r--){
		for(s=5;s>r ;s--){
			printf(" ");
		}
		for(c=1; c<=r;c++){
			if(c%2!=0){
					printf("-");
			}
			else{
					printf("|");
			}
		
		}
		printf("\n");	
}
	return 0;
}
