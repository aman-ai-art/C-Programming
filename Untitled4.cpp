#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i, j, n;
	char ch, word[25];
	printf("Enter the word\n");
	gets(word);
	getchar();
	printf("Enter the character and its index\n");
	scanf("%c %d",&ch,&n);
	j=strlen(word);
	for(i=j;i>=n;i--)
	{
		word[i+1]=word[i];
	}
	word[n]=ch;
	word[j+1]='\0';
	printf("The word becomes %s",word);
	return 0;
}
