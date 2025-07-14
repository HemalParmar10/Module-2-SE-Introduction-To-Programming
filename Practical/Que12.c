// Q: Write a C program that defines a structure to store a student's details (name, roll number, and marks). Use an array of structures to store details of 3 students and print them.

#include <stdio.h>
// Define structure for student
struct Student
{
  char name[50];
  int rollNumber;
  float marks;
};
int main()
{
  struct Student students[3];
  // Input details for 3 students
  for (int i = 0; i < 3; i++)
  {
    printf("Enter details for student %d:\n", i + 1);
    printf("Name: ");
    scanf(" %[^\n]", students[i].name); // Read string with spaces
    printf("Roll Number: ");
    scanf("%d", &students[i].rollNumber);
    printf("Marks: ");
    scanf("%f", &students[i].marks);
    printf("\n");
  }

  // Display student details
  printf("Student Details:\n");
  for (int i = 0; i < 3; i++)
  {
    printf("Student %d:\n", i + 1);
    printf("Name : %s\n", students[i].name);
    printf("Roll Number: %d\n", students[i].rollNumber);
    printf("Marks : %.2f\n", students[i].marks);
    printf ("\n");
  }

  return 0;
}