#include<stdio.h>
int main(){
    int A[2][3] = {{3, 2, 1}, 
	               {8, 9, 10}};
	int r,c;
	r=sizeof(A)/sizeof(A[0]);
	c=sizeof(A[0])/sizeof(A[0][0]);
	printf("number of rows : %d\n",r);
	printf("number of columns : %d",c);
	return 0;
}
