#include<stdio.h>
int main(){	
	int a=1,n,sum=0;
	printf("print sum 1 to N\n");
	printf("Enter value : ");
	scanf("%d",&n);	
	do{
        sum = sum+a;
        a++;
	}
	while(a<=n);
	printf("sum = %d",sum);
	return 0;
}
