#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char word[20];
	int i, n, flag=1;
	printf("Enter the word\n");
	gets(word);
	n=strlen(word);
for(i = 0; i < n / 2; i++) {
    if(word[i] != word[n-i-1]) {
        flag = 0;
        break;
    }
}
	if(flag)
	{
		printf("The word %s is a palindrome\n",word);
	}
	else 
	{
		printf("The word is not pallidrome\n");
	}
	return 0;
}
