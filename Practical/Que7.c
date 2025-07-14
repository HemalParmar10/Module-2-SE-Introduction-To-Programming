// Q: Write a C program that uses the break statement to stop printing numbers when it reaches 5. Modify the program to skip printing the number 3 using the continue statement.

#include <stdio.h>
int main()
{
  int i;

  // Part 1: Using break to stop at 5
  printf("Using break statement (stop at 5):\n");
  for (i = 1; i <= 10; i++)
  {
    if (i == 5)
    {
      break; // Exit the loop when i is 5
    }
    printf("%d ", i);
  }

  // Part 2: Using continue to skip 3
  printf("\n\nUsing continue statement (skip 3):\n");
  for (i = 1; i <= 10; i++)
  {
    if (i == 3)
    {
      continue; // Skip this iteration when i is 3
    }
    printf("%d ", i);
  }
  printf("\n");
  
  return 0;
}