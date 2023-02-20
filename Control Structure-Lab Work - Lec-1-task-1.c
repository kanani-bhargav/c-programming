#include<stdio.h>

main(){
	float a,b;
	x:
	printf("Find minimum numaber.\n");
	printf("Enter first number : ");
	scanf("%f",&a);
	printf("Enter second number : ");
	scanf("%f",&b);
	if(a<b){
		printf("%f is minimum number\n\n",a);
	}
	else{
		printf("%f is minimum number\n\n",b);
	}
	goto x;
}
