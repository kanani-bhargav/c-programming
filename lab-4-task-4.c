#include<stdio.h>
main(){
	double base=4,height=2,area,result,a,b;
	area=(base*height)/2;
	printf("area of rectangle :%lf",area);
	x:
	printf("\nFind Area of Triangle\n");
	printf("Enter Base:");
	scanf("%lf", &a);
	printf("Enter Height:");
	scanf("%lf", &b);
	result=(a*b)/2;
	printf("Area of Triangle: %lf",result);
	goto x;
}
