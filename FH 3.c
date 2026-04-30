#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct date
{
int dd, mm, yy;
};
struct student
{
    int roll;
    char name[30];
    char adrs[30];
    char flty[30];
    struct date dob;
};
int main()
{
    struct student s[2];
    int i, n=2;
    FILE *fptr;
    fptr=fopen("Student.txt","w+");
    if(fptr==NULL)
    {
        printf("Error in openning file\n");
        exit(1);
    }
    printf("Enter the details of 2 students\n");
    for(i=0;i<n;i++)
    {
        printf("Enter roll number: ");
        scanf("%d",&s[i].roll);
        getchar();
        printf("Enter name: ");
        gets(s[i].name);
        printf("Enter address: ");
        gets(s[i].adrs);
        printf("Enter faculty: ");
        gets(s[i].flty);
        printf("Enter date of birth(dd\\mm\\yy): \n");
        scanf("%d%d%d",&s[i].dob.dd,&s[i].dob.mm,&s[i].dob.yy);
        getchar();
    }
    fwrite(&s,sizeof(s),2,fptr);
    rewind(fptr);
    fread(&s,sizeof(s),2,fptr);
    printf("The data of the entered student who are not from pokhara\n");
    printf("Roll no\t\tName\t\tFaculty\t\tDate of birth\n");
    for(i=0;i<n;i++)
    {
        if((strcmp(s[i].adrs,"Pokhara"))!=0)
        {
            printf("%d\t\t%s\t\t%s\t\t%d\\%d\\%d\n",s[i].roll,s[i].name,s[i].flty,s[i].dob.dd,s[i].dob.mm,s[i].dob.yy);
        }
    }
    fclose(fptr);
    return 0;
}
