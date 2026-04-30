#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int n, i, j; 
	char name[50][20];
	char temp[20];
	printf("Enter number of students\n");
	scanf("%d",&n);
	getchar();
	printf("Enter the names of %d students\n",n);
	for(i=0;i<n;i++)
	{
		gets(name[i]);
	}
for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(strcmp(name[j], name[j + 1]) > 0) {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
    }
}
	printf("The inputted names are:\n");
	for(i=0;i<n;i++) 
	{
		printf("%s\n",name[i]);
	}
	return 0;
}
