#include<stdio.h>

float main(){
	float a,b,c;
	x:
	printf("\nFind Max number : \n");
	printf("Enter first value : ");
	scanf("%f",&a);
	printf("Enter second value : ");
	scanf("%f",&b);
	printf("Enter third value : ");
	scanf("%f",&c);
	(a>b)?
		(a>c)?
			printf("%f is Max number",a)
		:
			printf("%f is Max number",c)
		
	:
		(b>c)?
			printf("%f is Max number",b)
		:
			printf("%f is Max number",c);				
	
	goto x;
	return 0;

