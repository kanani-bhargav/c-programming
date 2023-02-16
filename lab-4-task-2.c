#include<stdio.h>
main(){
	double side=4,area,result,r;
	area=side*side;
	printf("area of square :%lf",area);
	x:
	printf("\nFind Area of Square\n");
	printf("Enter Side(width):");
	scanf("%lf", &r);
	result=r*r;
	printf("Area of Square: %lf",result);
	goto x;
}
