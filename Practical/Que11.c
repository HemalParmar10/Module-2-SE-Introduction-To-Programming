// Q: Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen().

#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100], str2[100];

  // Taking input from the user
  printf("Enter the first string: ");
  fgets(str1, sizeof(str1), stdin);

  str1[strcspn(str1, "\n")] = '\0'; // Remove trailing newline if present

  printf("Enter the second string: ");
  fgets(str2, sizeof(str2), stdin);
  
  str2[strcspn(str2, "\n")] = '\0'; // Remove trailing newline if present

  // Concatenating the strings
  strcat(str1, str2);

  // Displaying the result
  printf("\nConcatenated string: %s\n", str1);
  printf("Length of concatenated string: %lu\n", strlen(str1));

  return 0;
}