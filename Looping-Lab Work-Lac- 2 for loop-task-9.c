#include<stdio.h>
int main(){	
    int i,n,f=1;
	printf("calculate the factorial of N. using for loop.\n");
	printf("Enter value : ");
	scanf("%d",&n);
	for( i=1; i<=n;i++){
	f= f*i;
	}
	printf("factorial = %d", f);
	return 0;
}
