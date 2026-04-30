#include<stdio.h>
#include<stdlib.h>
#include<math.h>
{
	int mat[2][3], i, j;
	printf("Enter elements of the 2x3 order matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nEnter matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("The output matrix is:\n")
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",0*mat[i][j]);
		}
	}
	return 0;
}
