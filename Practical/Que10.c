// Q: Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.

#include <stdio.h>
int main()
{
  int number = 10; // Declare an integer variable
  int *ptr;
  // Declare a pointer to an integer
  ptr = &number;

  // Assign the address of 'number' to the pointer
  printf("Before modification:\n");
  printf("Value of number: %d\n", number);
  printf("Address of number: %p\n", (void *)&number);
  printf("Value stored in pointer ptr: %p\n", (void *)ptr);
  printf("Value pointed to by ptr: %d\n", *ptr);

  *ptr = 20;
  
  // Modify the value of 'number' using the pointer
  printf("\nAfter modification:\n");
  printf("Value of number: %d\n", number);
  printf("Value pointed to by ptr: %d\n", *ptr);

  return 0;
}