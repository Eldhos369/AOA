#include<stdio.h>
int main(){
	int n;
	printf("Enter n value: \n");
	scanf("%d",&n);
	if(n>0)
		printf("Fact of %d ->%d \n",n,fact(n));
	else
		printf("Not possible");
}
int fact(int n){
	if(n==0||n==1)
		return 1;
	else
		return (n*fact(n-1));
}
