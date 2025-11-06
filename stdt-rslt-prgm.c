/* Name  kelvin kiplimo 
registration no.ct101/g/26636/25
date 06/102025
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for student information
struct Student {
    char name[50];
    int regNumber;
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student student;
    
    // Open binary file for reading
    file = fopen("results.dat", "rb");
    
    if (file == NULL) {
        printf("Error opening file! File may not exist.\n");
        return 1;
    }
    
    printf("Student Examination Results:\n");
    printf("----------------------------\n");
    
    // Read and display all student records
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Name: %s\n", student.name);
        printf("Registration Number: %d\n", student.regNumber);
        printf("Total Marks: %.2f\n", student.totalMarks);
        printf("----------------------------\n");
    }
    
    fclose(file);
    return 0;
}