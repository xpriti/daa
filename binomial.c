#include <stdio.h>
int min(int a,int b);
int bc(int n,int k)
{
	int c[n+1][k+1];
	int i,j;
	for(i=0;i<=n;i++) {
		for(j=0;j<=min(i,k);j++) {
			if(j==0 || j==i)
			c[i][j]=1;
			else
			c[i][j]=c[i-1][j-1]+c[i-1][j];
		}
	}
	return c[n][k];
}
int min(int a,int b) {
	return(a<b)?a:b;
}
void main() {
	int n,k;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the value of k:\n");
	scanf("%d",&k);
	if(k>n) 
	printf("Error!");
	else
	printf("The value of c(%d%d)=%d",n,k,bc(n,k));
}
