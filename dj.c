#include<stdio.h>
int main(){
	int visited[20],i,k,w,v,min;
	int n,sv,j,dist[10],cost[10][10];
	printf("\nEnter the no of vertices");
	scanf("%d",&n);
	printf("Enter the cosr matrix:\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++){
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
	printf("Enter the source\n");
	scanf("%d",&sv);
	for(i=1;i<=n;i++){
		visited[i]=0;
		dist[i]=cost[sv][i];
	}
	visited[sv]=1;
	dist[sv]=1;
	for(k=2;k<=n;k++){
		min=999;
		for(w=1;w<=n;w++){
			if(dist[w]<min&&visited[w]==0){
				min=dist[w];
				v=w;
			}
		}
		visited[v]=1;
		for(w=1;w<=n;w++){
			if(dist[v]+cost[v][w]<dist[w])
				dist[w]=cost[v][w]+dist[v];
		}
	}
	for(j=1;j<=n;j++){
		if(j!=sv)
			printf("%d->%d==%d\n",sv,j,dist[j]);
	}
}
