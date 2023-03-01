#include<stdio.h>
int main(){	
    int i,n=3000;
	printf("Find leap year from 2000 to 3000 using for loop.\n");
	for( i=2000; i<=n;i++){
		if(i%4==0){
			printf("%d \n",i);
		}	
	}
	return 0;
}
