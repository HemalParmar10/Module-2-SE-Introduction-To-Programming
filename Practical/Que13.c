// Q: Write a C program to create a file, write a string in to it, close the file, then open the file again to read and display its contents.

#include <stdio.h>
int main()
{
  FILE *file;
  char str[] = "Hello, this is a test string written to the file.";
  char buffer[100];

  // Step 1: Create and write to the file
  file = fopen("example.txt", "w"); // Open file in write mode
  if (file == NULL)
  {
    printf("Error opening file for writing.\n");
    return 1;
  }
  fputs(str, file); // Write string to file
  // Close the file after writing
  fclose(file);

  // Step 2: Reopen the file to read
  file = fopen("example.txt", "r"); // Open file in read mode
  if (file == NULL)
  {
    printf("Error opening file for reading.\n");
    return 1;
  }

  // Read and display contents
  printf("Contents of the file:\n");
  while (fgets(buffer, sizeof(buffer), file) != NULL)
  {
    printf("%s", buffer);
  }
  fclose(file); // Close the file after reading
  
  return 0;
}