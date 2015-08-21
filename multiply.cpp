#include<stdio.h>
int main()
{   
    int m,n,p,i,j,s,sum;
    printf("enter the no. of rows and colums");
	scanf("%d %d %d %d",&m,&n,&n,&p);
	int a1[m][n],a2[n][p],c[m][p];
	printf("enter first matrix");
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		scanf("%d",&a1[i][j]);
	}	
	}
	printf("enter second matrix");
	for(i=0;i<n;i++)
	{
	for(j=0;j<p;j++)
	{
		scanf("%d",&a2[i][j]);
	}	
	}
	for(i=0;i<m;i++)
	{
	
		for(j=0;j<p;j++)
		{	sum=0;
			for(s=0;s<n;s++)
			{
				sum=sum+a1[i][s]*a2[s][j];
			    
			}
		c[i][j]=sum;	
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
