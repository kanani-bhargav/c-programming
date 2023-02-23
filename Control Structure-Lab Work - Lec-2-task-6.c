#include<stdio.h>

float main(){
	float a,b,c,d;
	x:
	printf("Find maximum number : \n");
	printf("Enter first value : ");
	scanf("%f",&a);
	printf("Enter second value : ");
	scanf("%f",&b);
	printf("Enter third value : ");
	scanf("%f",&c);
	printf("Enter fourth value : ");
	scanf("%f",&d);
	(a>b)?
		(a>c)?
			(a>d)?
				printf("%f is maximum number",a)
			:
			    printf("%f is maximum number",d)
		:
			(c>d)?
				 printf("%f is maximum number",c)
			:
				 printf("%f is maximum number",d)
	:
		(b>c)?
			(b>d)?
				 printf("%f is maximum number",b)
			:
				 printf("%f is maximum number",d)
		:
			(c>d)?
				 printf("%f is maximum number",c)
			:
				 printf("%f is maximum number",d);
	goto x;
		return 0;
}
