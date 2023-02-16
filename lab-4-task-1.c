#include<stdio.h>
main(){
	float radius=2,pai=3.14,area,result,r;
	area=radius*radius*pai;
	printf("area of circle :%f",area);
	x:
	printf("\nFind Area of Circle\n");
	printf("Enter Radius:");
	scanf("%f", &r);
	result=r*r*pai;
	printf("Area of Circle: %f",result);
	goto x;
}
