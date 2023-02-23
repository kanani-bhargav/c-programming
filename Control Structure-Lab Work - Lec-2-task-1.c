#include<stdio.h>

float main(){
	float a,b;
	x:
	printf("\n\nFind maximum number  \n");
	printf("Enter first value : ");
	scanf("%f",&a);
	printf("Enter second value : ");
	scanf("%f",&b);
	
	(a>b)?
	printf("%f is max ",a)
	:
	printf("%f is max ",b);
	
	goto x;
	
	return 0;
}
