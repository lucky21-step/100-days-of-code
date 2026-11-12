
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];
    int i;

    // Read details of 5 students
    for (i = 0; i < 5; i++) {
        scanf("%s %d %d", s[i].name,
              &s[i].roll_no, &s[i].marks);
    }

    // Print student details
    printf("Name\tRoll\tMarks\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n",
               s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
