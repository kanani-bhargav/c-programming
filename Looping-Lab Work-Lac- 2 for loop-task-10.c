#include<stdio.h>
int main(){	
    int i,n;
	printf("calculate the factorial of N. using for loop.\n");
	printf("Enter value : ");
	scanf("%d",&n);
	for( i=1; i<=10;i++){
	printf("%d x %d = %d \n",n,i,i*n);
	}

	return 0;
}
