#include<stdio.h>
int main(){
	int n,p,i,j,r,c,a[10][10],sm,b[10][10],sum[10][10];
	printf("Enter value of ROW and COLUMN\n");
	scanf("%d%d",&r,&c);
	printf("Enter the value\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("Enter value of 2nd matrix ROW AND COLUMN\n");
	scanf("%d%d",&n,&p);
	if(c!=n)
		printf("Can't multiply!\n");
	else{
		printf("Ente the value of 2nd matrix\n");
		for(i=0;i<n;i++)
			for(j=0;j<p;j++)
				scanf("%d",&b[i][j]);
		for(int k=0;k<r;k++)
			for(i=0;i<p;i++){
				for(j=0;j<n;j++){
					sm=sm+a[k][j]*b[j][i];
				}
				sum[k][i]=sm;
				sm=0;
			}
		printf("Sum of A and B");
		for(i=0;i<r;i++){
			for(j=0;j<p;j++)
				printf("%d\t",sum[i][j]);
			printf("\n");
		}
	}
}
