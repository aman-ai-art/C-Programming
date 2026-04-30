#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fixed struct definition
struct data {
    char name[20];
    char address[30];
    char number[15]; // Fixed the array syntax
} emp[10];

int main() {
    int i;
    FILE *fptr;

    // Open in wb+ mode (write and read binary)
    fptr = fopen("employee.txt", "wb+");
    if (fptr == NULL) {
        printf("\n Error in opening file\n");
        exit(1);
    }

    printf("Enter data of 10 employees\n");
    for(i = 0; i < 10; i++) {
        printf("\nEnter name: ");
        scanf(" %[^\n]", emp[i].name); // Safer alternative to gets() [cite: 17]

        printf("Enter address: ");
        scanf(" %[^\n]", emp[i].address);

        printf("Enter telephone number: ");
        scanf("%s", emp[i].number);
    }

    // Write the whole array at once
    fwrite(emp, sizeof(struct data), 10, fptr);

    // Reset pointer to the beginning
    rewind(fptr);

    // Read the whole array back [cite: 24]
    fread(emp, sizeof(struct data), 10, fptr);

    printf("\n--- Displaying Information ---");
    for (i = 0; i < 10; i++) {
        printf("\nData stored of employee %d:\n", i + 1);
        puts(emp[i].name);    // Using puts as requested [cite: 28]
        puts(emp[i].address);
        puts(emp[i].number);
    }

    fclose(fptr);
    return 0;
}
