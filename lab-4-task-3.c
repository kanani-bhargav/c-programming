#include<stdio.h>
main(){
	double width=4,length=2,area,result,a,b;
	area=width*length;
	printf("area of rectangle :%lf",area);
	x:
	printf("\nFind Area of Rectangle\n");
	printf("Enter Side(width):");
	scanf("%lf", &a);
	printf("Enter Side(length):");
	scanf("%lf", &b);
	result=a*b;
	printf("Area of Rectangle: %lf",result);
	goto x;
}
