#include<stdio.h>


int main(){
	
	int a=2000,n=3000;
	printf("Find leap year from 2000 to 3000\n");

	do{
		if(a%4==0){
			printf("%d\n",a);
		}else{
		}
		a++;
	}
	while(a<=n);
	return 0;
}
