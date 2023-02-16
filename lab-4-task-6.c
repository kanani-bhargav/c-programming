#include<stdio.h>
main(){
	double radius=2,pai=3.14,perimeter,result,a;
	perimeter=2*pai*radius;
	printf("area of perimeter of circle : %lf",perimeter);
	x:
	printf("\nFind Area of perimeter of circle\n");
	printf("Enter radius:");
	scanf("%lf", &a);
	result=2*pai*a;
	printf("Perimeter of circle : %lf",result);
	goto x;
}
