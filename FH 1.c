#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[25];
    char adrs[25];
    long int regn;
    char flty[25];
    int year;
};
int main()
{
    struct student st;
    FILE *fptr;
    int n, i;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    getchar();
    printf("Enter the data of a student");
    fptr=fopen("STUDENT.dat","a+");
    if(fptr==NULL)
    {
        printf("ERROR\n");
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("\nEnter name:");
        gets(st.name);
        printf("Enter address:");
        gets(st.adrs);
        printf("Enter registration number:");
        scanf("%ld",&st.regn);
        getchar();
        printf("Enter the faculty:");
        gets(st.flty);
        printf("Enter the year of admission:");
        scanf("%d",&st.year);
        getchar();
        fwrite(&st,sizeof(st),1,fptr);
    }
    rewind(fptr);
    printf("The data of student from year 2022.\n|Name|\t\t|Address|\t\t|Reg.no|\t\t|faculty|\t\t|year|\n");
    while((fread(&st,sizeof(st),1,fptr))==1)
    {
        if(st.year==2022)
        {
            printf("|%s|\t\t|%s|\t\t|%ld|\t\t|%s|\t\t|%d|\n",st.name,st.adrs,st.regn,st.flty,st.year);
        }
    }
    fclose(fptr);
    return 0;
}
