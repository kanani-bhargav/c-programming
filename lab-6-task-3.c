#include<stdio.h>
main(){
	float x=2;
	float y=4;
	float result,a,b,c;
	result=(x+y)*3;
	printf("%f\n",result);
	R:
	printf("\n\nFind answer 3(x+y) . \n");
	printf("Enter the value of x : ");
	scanf("%f",&a);
	printf("Enter the value of y : ");
	scanf("%f",&b);
	c=(a+b)*3;
	printf("Answere : %f",c);
	goto R;
}
