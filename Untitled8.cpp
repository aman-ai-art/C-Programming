#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i, j, n=12;
	char strp[12]={"PROGRAMMING"};
	for(i=0;i<n-1;i++)
	{
		printf("%d",i+1);
		for(j=0;j<=i;j++)
		{
			printf("%c",strp[j]);
		}
		printf("\n");
	}
	return 0;
}
