#include<stdio.h>
int main()
{
	int a[10];
	int key,n;
	printf("enter number of the elements \n");
		scanf("%d",&n);
	printf("read n elements");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter element to be searched");
	scanf("%d",&key);
	int flag=bs(a,0,n-1,key);
	if(flag==-1)
	{
		printf("element not found\n");
	}
	else
	{
		printf("element found at %d",flag+1);
	}
}
int bs(int a[],int low,int high,int key)
{
	int mid;
	if(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
			return mid;
		if(a[mid]>=key)
			return bs(a,0,mid-1,key);
		else
			return bs(a,mid+1,high,key);
	}
	return -1;
}
