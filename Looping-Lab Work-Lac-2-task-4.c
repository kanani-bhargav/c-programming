#include<stdio.h>
int main(){	
	int a=1,n;
	printf("Print n to 1 using do while loop.\n");
	printf("Enter value : ");
	scanf("%d",&n);	
	do{
		printf("%d\n",n);
		n--;
	}
	while(a<=n);
	return 0;
}
