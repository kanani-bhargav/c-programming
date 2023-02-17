#include<stdio.h>
main(){
	float x=2;
	float y=4;
	float result,a,b,c;
	result=(x+y)*(x+y);
	printf("%f\n",result);
	R:
	printf("\n\nFind answer (x+y)2 . \n");
	printf("Enter the value of x : ");
	scanf("%f",&a);
	printf("Enter the value of y : ");
	scanf("%f",&b);
	c=(a+b)*(a+b);
	printf("Answere : %f",c);
	goto R;
}
