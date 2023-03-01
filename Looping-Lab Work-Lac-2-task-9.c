#include<stdio.h>
int main(){	
	int a=1,n,f=1;
	printf("calculate the factorial of N.\n");
	printf("Enter value : ");
	scanf("%d",&n);	
	do{
        f = f*a;
        a++;
	}
	while(a<=n);
	printf("factorial = %d",f);
	return 0;
}
