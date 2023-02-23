#include<stdio.h>

float main(){
	float a,b,c;
	x:
	printf("Find Minimum number : \n");
	printf("Enter first value : ");
	scanf("%f",&a);
	printf("Enter second value : ");
	scanf("%f",&b);
	printf("Enter third value : ");
	scanf("%f",&c);
	if(a<b){
		if(a<c){
			printf("%f is minimum number",a);
		}
		else{
			printf("%f is minimum number",c);
		}
	}
	else{
		if(b<c){
			printf("%f is minimum number",b);
		}
		else{
			printf("%f is minimum number",c);
			
		}
	}
	goto x;
	return 0;
}
