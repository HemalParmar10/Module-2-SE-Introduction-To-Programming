// Write a C program that includes variables, constants, and comments. Declare and use different data types (int, char, float) and display their values.

#include <stdio.h>
#define PI 3.14159 // Define a constant

int main()
{
  // Declare and initialize an integer variable
  int age = 25;

  // Declare and initialize a character variable
  char grade = 'A';

  // Declare and initialize a float variable
  float height = 5.9;

  // Output the values
  printf("Age: %d years\n", age); // Integer output
  printf("Grade: %c\n", grade); // Character output
  
  printf("Height: %.1f feet\n", height); // Float output
  printf("Value of PI: %.5f\n", PI); // Constant output

  return 0;
}