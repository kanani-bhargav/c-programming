
#include<stdio.h>

int main(){
	int a=1;
	int n;
	
	printf("Enter value\n");
	scanf("%d",&n);
	
	
	while(a <= n){
		n--;
		printf("%d\n", n);
		n--;
	}
	
	return 0;
}
