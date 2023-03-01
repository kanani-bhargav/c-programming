#include<stdio.h>
int main(){	
    int i,n;
	printf("Print n to 1 using for loop.\n");
	printf("Enter value : ");
	scanf("%d",&n);
	for( i=1; i<=n; n--){
		printf("%d \n",n);
	}
	
	return 0;
}
