#include<stdio.h>
int main(){
	int a,b;
	printf("Ente 2 number to find GCD : ");
	scanf("%d%d",&a,&b);
	printf("GCD : %d\n",gcd(a,b));
}

int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}
