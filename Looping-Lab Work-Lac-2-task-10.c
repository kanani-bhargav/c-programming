#include<stdio.h>
int main(){	
	int a=1,n;
	printf("calculate the factorial of N.\n");
	printf("Enter value : ");
	scanf("%d",&n);	
	do{s
        printf(" %d x %d = %d\n",n, a,a*n);
        a++;
	}
	while(a<=10);
//	printf(" %d x %d = %d",n, a,a*n);
	return 0;
}
