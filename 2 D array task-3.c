#include<stdio.h>
int main(){
	int m,n;
	printf("Enter array rows : ");
	scanf("%d",&m);
	printf("Enter array columns : ");
	scanf("%d",&n);
	int a[m][n];
	int i,j,sum=0;
	float avg;
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter element [%d] [%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		for (i=0;i<m;i++){
		for(j=0;j<n;j++){
		printf("%d",a[i][j]);
		}
		printf("\n");
	}
		for (i=0;i<m;i++){
		for(j=0;j<n;j++){
		sum = sum + a[i][j];
		}
	}
	printf("sum of array : %d\n",sum);
	avg=(float)sum/(m*n);
	printf("average of 2d array : %f",avg);
	return 0;
}
