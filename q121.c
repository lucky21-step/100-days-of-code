#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Enter name and age: ");
    scanf("%99s %d", name, &age);

    FILE *fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error creating file!");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}