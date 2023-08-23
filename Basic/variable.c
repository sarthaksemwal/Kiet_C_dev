/*
varibale:n programming, a variable is a named storage location in memory that holds a value. 
Variables are used to store and manage data that can be manipulated, processed, and used within a program.
They provide a way to reference and work with data in a more abstract and symbolic manner.

Naming Rules:

Variable names must begin with a letter (uppercase or lowercase) or an underscore (_).
After the initial letter, variable names can contain letters, digits, and underscores.
Variable names are case-sensitive, meaning myVariable and myvariable are considered different variables.
Avoid using C keywords (reserved words) as variable names, such as int, while, if, etc.
Data Type:

C is a statically typed language, meaning you need to declare the data type of a variable when you create it. For example, int x; declares an integer variable named x.
Initialization:

Variables should be initialized before they are used. Uninitialized variables can lead to undefined behavior.
You can initialize a variable when you declare it: int x = 42;.
*/
#include <stdio.h>

int main() {
  

  //integer variable
  int a=10;
  printf("This is a int var %d",a);

  //character variable
  char b='20';
  printf("This is a char var %c",b);

  //float variable 
  float c=2.2;
   printf("This is a float var %f",c);



    return 0;
}
