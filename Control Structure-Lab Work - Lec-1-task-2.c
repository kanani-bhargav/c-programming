#include<stdio.h>

main(){
	float a,b;
	x:
	printf("Find neutral numaber.\n");
	printf("Enter number : ");
	scanf("%f",&a);
	if(a<0){
		printf("%f is number is not a neutral numaber.\n\n",a);
	}
	else if(a>0){
		printf("%f is number is not a neutral numaber.\n\n",a);
	}
	else{
		printf("%f is number is neutral numaber.\n\n",a);
	}
	goto x;
}
