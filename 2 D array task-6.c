#include<stdio.h>
int main(){
	int m;
	printf("Enter array rows and column :");
	scanf("%d",&m);
	int a[m][m];
	int i,j,sum=0;
	for (i=0;i<m;i++){
		for(j=0;j<m;j++){
			printf("enter element [%d] [%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for (i=0;i<m;i++){
		for(j=0;j<m;j++){
		printf("%d",a[i][j]);
		}
		printf("\n");
	}
		for (i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(i==j){
				sum=sum+a[i][j];
			}
		}
	}
			printf("sum of diaginal : %d\n",sum);
	
	return 0;
}
