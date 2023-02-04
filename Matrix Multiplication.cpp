#include<stdio.h>
int main()
{
	int i,j,k,row,column;
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of columns: ");
	scanf("%d",&column);
	int a[row][column],b[row][column],c[row][column];
	printf("\nEnter the elements of Matrix A:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements of Matrix B:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
//	Computing Multiplication
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			c[i][j]=0;
			for(k=0;k<column;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\nMultiplication of Matrix A & B =\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
