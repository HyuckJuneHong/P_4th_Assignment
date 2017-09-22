#include <stdio.h>
 
int main(void)
{
    int a[10][10], b[10][10], result[10][10], c1, r1, c2, r2, i, j, n, number= 0;
 
	printf("Enter rows and column for first matrix: ");
	scanf("%d %d", &r1, &c1);
	printf("Enter rows and column for second matrix: ");
	scanf("%d %d", &r2, &c2);
 
	while (c1 != r2)
	{
		printf("Error! column of first matrix not equal to row of second.\n\n");
		printf("Enter rows and column for first matrix: ");
		scanf("%d %d", &r1, &c1);
		printf("Enter rows and column for second matrix: ");
		scanf("%d %d",&r2, &c2);
	}
	printf("\nEnter elements of matrix 1:\n");
	for(i=0; i<r1; ++i)
	{
		for(j=0; j<c1; ++j)
		{
			printf("Enter element of matrix a[%d][%d]:", i+1, j+1);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\nEnter elements of matrix 2:\n");
	for(i=0; i<r2; ++i)
	{
		for(j=0; j<c2; ++j)
		{
			printf("Enter element of matrix b[%d][%d]:", i+1, j+1);
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i<r1; ++i)
	{
		for(j=0; j<c2; ++j)
			result[i][j]=0;
	}
 
	for(i=0; i<r1; ++i)
	{
		for(j=0; j<c2; ++j)
		{
			for(n=0; n<c1; ++n)
			   result[i][j] +=  a[i][n]*b[n][j];
		}
	}
	for(i=0; i<r1; ++i)
	{
		for(j=0; j<c2; ++j)
		{
			if(number++%c2==0)
				puts("\n");
			else
				printf("");
			printf("%d  ", result[i][j]);
		}
	}
	return 0;
}
 