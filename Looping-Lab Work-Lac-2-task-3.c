#include<stdio.h>
int main(){
	int a=1,n;
	printf("Print 1 to n using do while loop.\n");
	printf("Enter value : ");
	scanf("%d",&n);
	do{
		printf("%d\n",a);
		a++;
	}
	while(a<=n);
	return 0;
}
