// Q: Write a C program that calculates the factorial of a number using a function. Include function declaration, definition, and call.

#include <stdio.h>

// Function declaration (prototype)
int factorial(int n);
int main()
{
  int number, result;

  // Input from user
  printf("Enter a positive integer: ");
  scanf("%d", &number);

  // Check for negative input
  if (number < 0)
  {
    printf("Factorial is not defined for negative numbers.\n");
  }
  else
  {
    // Function call
    result = factorial(number);
    printf("Factorial of %d is %d\n", number, result);
  }
  return 0;
}

// Function definition
int factorial(int n)
{
  int i, fact = 1;
  for (i = 1; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}