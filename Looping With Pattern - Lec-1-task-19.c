
#include<stdio.h>

int main(){
	
	int r;
	int c;
	int k=1;
	
	for(r=1;r<=5;r++){
		for(c=1;c<=r;c++){
			printf("%d",k);
			k++;
	
		}
		printf("\n");	
}
	return 0;
}
