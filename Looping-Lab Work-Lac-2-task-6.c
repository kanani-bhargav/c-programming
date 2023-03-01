#include<stdio.h>
int main(){	
	int a=1,n;
	printf("print even no. from N to 1\n");
	printf("Enter value : ");
	scanf("%d",&n);	
	do{
		if(n%2==0){
			printf("%d\n",n);
		}else{
		}
		n--;
	}
	while(a<=n);
	return 0;
}
