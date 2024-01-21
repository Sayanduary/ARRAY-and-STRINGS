#include <stdio.h>
struct Student
{
    char *name;
    int roll_number;
    int age;
    double total_marks;
};

int main()
{
    int i, n = 2;
    // Create the student's structure variable
    // with n Student's records
    struct Student student[n];

    // Get the students data
    student[0].roll_number = 1;
    student[0].name = "Sayan";
    student[0].age = 12;
    student[0].total_marks = 78.50;

    student[1].roll_number = 5;
    student[1].name = "Duary";
    student[1].age = 10;
    student[1].total_marks = 56.84;
    for (i = 0; i < n; i++)
    {
        printf("\tName = %s\n", student[i].name);
        printf("\tRoll Number = %d\n", student[i].roll_number);
        printf("\tAge = %d\n", student[i].age);
        printf("\tTotal Marks = %0.2f\n\n", student[i].total_marks);
    }

    return 0;
}