#include<stdio.h>
int main(){
	int n,i,r;
	printf("Enter N c R value");
	scanf("%d%d",&n,&r);
	if(n<r)
		printf("Cannot fint NcR");
	else
		printf("ncr=%d",ncr(n,r));
}

int ncr(int n,int r){
	int i,j;
	int a[n+1][r+1];
	for(i=0;i<=n;i++)
		for(j=0;j<=(i<r?i:r);j++){
			if(j==0||j==i)
				a[i][j]=1;
			else
				a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	return a[n][r];
}
