A library is not a luxury but one of the necessities of life : Creating a static library containing all the functions listed below.
Functions;
 int _putchar(char c);
 int _islower(int c);
 int _isalpha(int c);
 int _abs(int n);
 int _isupper(int c);
 int _isdigit(int c);
 int _strlen(char *s);
 void _puts(char *s);
 char *_strcpy(char *dest, char *src);
 int _atoi(char *s);
 char *_strcat(char *dest, char *src);
 char *_strncat(char *dest, char *src, int n);
 char *_strncpy(char *dest, char *src, int n);
 int _strcmp(char *s1, char *s2);
 char *_memset(char *s, char b, unsigned int n);
 char *_memcpy(char *dest, char *src, unsigned int n);
 char *_strchr(char *s, char c);
 unsigned int _strspn(char *s, char *accept);
 char *_strpbrk(char *s, char *accept);
 char *_strstr(char *haystack, char *needle);

File main.h contains all of the above functions created for this project.

Steps to create static library.
First compile all .c files to get our object files .o files. gcc -c *c
Then we create our static library from our object files. ar rc libmy.a *.o
Then we confirm if our static library was created successfully. ar -t libmy.a
We confirm if our object files were linked successfully. nm main.h
Compile the main code to test our static library this way: gcc -std=gnu89 main.c -L. -main -o quote
Without libraries what have we? We have no past and no future : Create a script that creates a library called liball.a from all the .c files that are in the current directory.
