#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[50], arr2[50]; // Ascending array
int i, temp, j, m;
printf("Enter the number of the elements in array\n");
scanf("%d",&m);
printf("Enter the elements of array\n");
for(i=0;i<m;i++)
{
    scanf("%d",&arr1[i]);
    arr2[i]=arr1[i];
}
printf("Array before sorting:\n");
for(i=0;i<m;i++)
{
    printf("%d ",arr1[i]);
}
for(i=0;i<m;i++)
{
    for(j=0;j<m-1-i;j++)
    {
    if(arr2[j]>arr2[j+1])
    {
        temp=arr2[j];
        arr2[j]=arr2[j+1];
        arr2[j+1]=temp;
    }
    }
}
printf("\nArray after sorting:\n");
for(i=0;i<m;i++)
{
    printf("%d ",arr2[i]);
}
return 0;
}
