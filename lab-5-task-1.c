#include<stdio.h>
main(){
	int a=50,b=80,c;
	printf("Before swap : a=%d b=%d",a,b);
	c=a+b;
	a=c-a;
	b=c-b;
	printf("\nafter swap : a=%d b=%d",a,b);
	
}
