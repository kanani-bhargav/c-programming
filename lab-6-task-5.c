#include<stdio.h>
main(){
	float x=2;
	float y=2;
	float z=2;
	float result,a,b,c,d;
	result=(x+y+z)*3;
	printf("%f\n",result);
	R:
	printf("\n\nFind answer 3(x+y+z) . \n");
	printf("Enter the value of x : ");
	scanf("%f",&a);
	printf("Enter the value of y : ");
	scanf("%f",&b);
	printf("Enter the value of z : ");
	scanf("%f",&d);
	c=(a+b+d)*3;
	printf("Answere : %f",c);
	goto R;
}
