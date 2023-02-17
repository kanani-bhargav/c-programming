#include<stdio.h>
main(){
	float x=1;
	float y=1;
	float z=1;
	float result,a,b,c,d;
	result=(x+y+z)*(x+y+z);
	printf("%f\n",result);
	R:
	printf("\n\nFind answer (x+y+z)2 . \n");
	printf("Enter the value of x : ");
	scanf("%f",&a);
	printf("Enter the value of y : ");
	scanf("%f",&b);
	printf("Enter the value of z : ");
	scanf("%f",&d);
	c=(a+b+d)*(a+b+d);
	printf("Answere : %f",c);
	goto R;
}
