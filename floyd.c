#include <stdio.h>
void fl(int d[10][10],int n)
{
	int i,j,k;
	for(k=0;k<n;k++)
	{
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				if(i!=j)
				{
					if(d[i][k]+d[k][j]<d[i][j])
					d[i][j]=d[i][k]+d[k][j];
				}
			}
		}
		printf("\nAfter iteration %d\n",k+1);
		for (i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("\t%d",d[i][j]);
			}
			printf("\n");
		}
	}
}
int main() 
{
	int d[10][10],n,i,j;
	printf("Enter no. of vertices:\n");
	scanf("%d",&n);
	printf("Enter cost matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&d[i][j]);	
		}
	}
		fl(d,n);
}
