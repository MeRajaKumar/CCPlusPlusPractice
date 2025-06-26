#include <stdio.h>
#include <stdlib.h>


struct Student {
    int roll;
    char name[50];
    float marks[3];
    float average;
};

int main() {
    int n, i, j;
    struct Student *students;

    
    printf("Enter number of students: ");
    scanf("%d", &n);


    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }


    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);  

        students[i].average = 0;
        for (j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].average += students[i].marks[j];
        }
        students[i].average /= 3.0; 
    }

    
    printf("\n---- Student Records ----\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Marks: ");
        for (j = 0; j < 3; j++) {
            printf("%.2f ", students[i].marks[j]);
        }
        printf("\nAverage: %.2f\n", students[i].average);
    }

    free(students);

    return 0;
}
