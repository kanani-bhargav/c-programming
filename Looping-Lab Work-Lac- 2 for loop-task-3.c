#include<stdio.h>
int main(){	
    int i,n;
	printf("Print 1 to n using for loop.\n");
	printf("Enter value : ");
	scanf("%d",&n);
	for( i=1; i<=n; i++){
		printf("%d \n",i);
	}
	
	return 0;
}
