#include<stdio.h>
main(){
	double principal =10000,rate=8,time=1,interest,result,p,r,t;
	interest=(principal*rate*time)/100;
	printf("Simple Interest : %lf",interest);
	x:
	printf("\nCalculate Simple Interest\n");
	printf("Enter Principal amount:");
	scanf("%lf", &p);
	printf("Enter rate of return:");
	scanf("%lf", &r);
	printf("Enter time period:");
	scanf("%lf", &t);
	result=(p*r*t)/100;
	printf("Simple Interest : %lf",result);
	goto x;
}
