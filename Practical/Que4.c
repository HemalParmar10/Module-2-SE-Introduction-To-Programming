// Write a C program that accepts two integers from the user and performs arithmetic, relational, and logical operations on them. Display the results.

#include <stdio.h>
int main()
{
  int a, b;
  
  // Input two integers
  printf("Enter the first integer: ");
  scanf("%d", &a);
  printf("Enter the second integer: ");
  scanf("%d", &b);

  // Arithmetic Operations
  printf("\n--- Arithmetic Operations ---\n");
  printf("a + b = %d\n", a + b);
  printf("a - b = %d\n", a - b);
  printf("a * b = %d\n", a * b);

  if (b != 0)
  {
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
  }
  else
  {
    printf("Division and modulus by zero are undefined.\n");
  }

  // Relational Operations
  printf("\n--- Relational Operations ---\n");
  printf("a == b: %d\n", a == b);
  printf("a != b: %d\n", a != b);
  printf("a < b: %d\n", a < b);
  printf("a > b: %d\n", a > b);
  printf("a <= b: %d\n", a <= b);
  printf("a >= b: %d\n", a >= b);

  // Logical Operations
  printf("\n--- Logical Operations ---\n");
  printf("a && b: %d\n", a && b);
  printf("a || b: %d\n", a || b);
  printf("!a: %d\n", !a);
  printf("!b: %d\n", !b);

  return 0;
}