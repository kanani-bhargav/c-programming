
#include<stdio.h>

int main(){
	int a=1;
	int n;
	
	printf("Enter value\n");
	scanf("%d",&n);
	
	
	while(a <= n){
		a++;
		printf("%d\n", a);
		a++;
	}
	
	return 0;
}
