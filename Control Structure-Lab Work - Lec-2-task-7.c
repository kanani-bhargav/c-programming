#include<stdio.h>

float main(){
	float a,b,c,d,e;
	x:
	printf("\nFind Max number : \n");
	printf("Enter first value : ");
	scanf("%f",&a);
	printf("Enter second value : ");
	scanf("%f",&b);
	printf("Enter third value : ");
	scanf("%f",&c);
	printf("Enter fourth value : ");
	scanf("%f",&d);
	printf("Enter fifth value : ");
	scanf("%f",&e);
	(a>b)?
		(a>c)?
			(a>d)?
				(a>e)?
					printf("%f is Max number",a)
				:
					printf("%f is Max number",e)
			:
				(d>e)?
					printf("%f is Max number",d)
				:
					printf("%f is Max number",e)
		:
			(c>d)?
				(c>e)?
					printf("%f is Max number",c)
				:
					printf("%f is Max number",e)
			:
				(d>e)?
					printf("%f is Max number",d)
				:
					printf("%f is Max number",e)
				
	:
		(b>c)?
			(b>d)?
				(b>e)?
					printf("%f is Max number",b)
				:
					printf("%f is Max number",e)
			:
				(d>e)?
					printf("%f is Max number",d)
				:
					printf("%f is Max number",e)
		:
			(c>d)?
				(c>e)?
					printf("%f is Max number",c)
				:
					printf("%f is Max number",e)
				
			:
				(d>e)?
					printf("%f is Max number",d)
				
				:
					printf("%f is Max number",e);
	goto x;
	return 0;
}
