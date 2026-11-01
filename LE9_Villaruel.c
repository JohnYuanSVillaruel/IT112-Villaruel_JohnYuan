#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    int numStudents;
    char name[100];
    int age;
    char course[50];

    file = fopen("student_records.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    printf("Enter the number of student records to store: ");
    if (scanf("%d", &numStudents) != 1) {
        printf("Invalid input.\n");
        fclose(file);
        return 1;
    }
    getchar();

    for (int i = 1; i <= numStudents; i++) {
        fprintf(file, "Student %d\n", i);

        printf("\n--- Enter Details for Student %d ---\n", i);

        printf("Name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';
        fprintf(file, "Name: %s\n", name);

        printf("Age: ");
        scanf("%d", &age);
        getchar();
        fprintf(file, "Age: %d\n", age);

        printf("Course: ");
        fgets(course, sizeof(course), stdin);
        course[strcspn(course, "\n")] = '\0';
        fprintf(file, "Course: %s\n", course);

        if (i < numStudents) {
            fprintf(file, "_____________________\n");
        }
    }

    fclose(file);
    printf("\nData successfully written to 'student_records.txt'!\n");

    file = fopen("student_records.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\n=====================================\n");
    printf("Contents of student_records.txt:\n");
    printf("=====================================\n");
    
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}