#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int n, i, cv=0;
	char word[50];
	printf("Enter the word\n");
	gets(word);
	n=strlen(word);
	for(i=0;i<n;i++)
	{
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
		{
			cv++;
		}
	}
	printf("Number of vowel in the word = %d",cv);
	return 0;
}
