#include<stdio.h>
int main(){	
    int i,n,sum=0;
	printf("print sum 1 to N using for loop.\n");
	printf("Enter value : ");
	scanf("%d",&n);
	for( i=1; i<=n;i++){
	sum= sum+i;
	}
	printf("sum = %d", sum);
	return 0;
}
