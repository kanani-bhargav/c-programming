#include<stdio.h>


int main(){
	
	int a=1,n;
	printf("print odd no. from 1 to N\n");
	printf("Enter value : ");
	scanf("%d",&n);
	
	
	do{
		if(a%2==0){
			
		}else{
			printf("%d\n",a);
		}

		a++;
	}
	while(a<=n);
	
	
	return 0;
}
