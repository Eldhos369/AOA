#include<stdio.h>
int v[20][20],value[23],weight[45];

int main(){
	int j,i,w,profit,n;
	printf("Enter the no of elementd\n");
	scanf("%d",&n);
	printf("Enter the capacity\n");
	scanf("%d",&w);
	printf("ENter the weight\n");
	for(i=1;i<=n;i++){
		scanf("%d",&weight[i]);
	}
	printf("Enter the prifit");
	for(i=1;i<=n;i++)
		scanf("%d",&value[i]);
	for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
			if(j==0||i==0) v[i][j]=0;
			else v[i][j]=-1;
	profit=knap(n,w);
	printf("The value id %d\n",profit);
}

int knap(int i,int j){
	int values;
	if(v[i][j]<0){
		if(j-weight[i]){
			values=max(knap(i-1,j),(value[i]+knap(i-1,j-weight[i])));
		}else values=knap(i-1,j);
		v[i][j]=values;
	}
	return v[i][j];
}

int max(int i,int j){
	return (i>=j?i:j);
}
