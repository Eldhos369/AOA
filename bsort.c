#include<stdio.h>
int main(){
	int a[100],i,n,s,temp;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(s=0;s<n-1;s++)
		for(i=0;i<n-s-1;i++){
			if(a[i]>a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	printf("sorted array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
