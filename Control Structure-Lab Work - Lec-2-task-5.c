#include<stdio.h>

float main(){
	float a,b,c,d,e;
	x:
	printf("Find Minimum number : \n");
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
	if(a<b){
		if(a<c){
			if(a<d){
				if(a<e){
					printf("%f is minimum number",a);
				}
				else{
					printf("%f is minimum number",e);
				}
			}
			else{
				if(d<e){
					printf("%f is minimum number",d);
				}
				else{
					printf("%f is minimum number",e);
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("%f is minimum number",c);
				}
				else{
					printf("%f is minimum number",e);
				}
			}
			else{
				if(d<e){
					printf("%f is minimum number",d);
				}
				else{
					printf("%f is minimum number",e);
				}
			}
		}
	}
	else{
		if(b<c){
			if(b<d){
				if(b<e){
					printf("%f is minimum number",b);
				}
				else{
					printf("%f is minimum number",e);
				}
			}
			else{
				if(d<e){
					printf("%f is minimum number",d);
				}
				else{
					printf("%f is minimum number",e);
				}
			}
		}
		else{
			if(c<d){
				if(c<e){
					printf("%f is minimum number",c);
				}
				else{
					printf("%f is minimum number",e);
				}
			}
			else{
				if(d<e){
					printf("%f is minimum number",d);
				}
				else{
					printf("%f is minimum number",e);
				}
			}
		}
	}
	goto x;
	return 0;
}
