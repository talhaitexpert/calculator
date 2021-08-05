/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

// functions declaration
int add(int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
int divide(int n1, int n2);

// main function
int main()
{
  int num1, num2;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("%d + %d = %d\n", num1, num2, add(num1, num2));
  printf("%d - %d = %d\n", num1, num2, subtract(num1, num2));
  printf("%d * %d = %d\n", num1, num2, multiply(num1, num2));
  printf("%d / %d = %d\n", num1, num2, divide(num1, num2));

  return 0;
}

// function to add two integer numbers
int add(int n1, int n2)
{
  int result;
  result = n1 + n2;
  return result;
}

// function to subtract two integer numbers
int subtract(int n1, int n2)
{
  int result;
  result = n1 - n2;
  return result;
}

// function to multiply two integer numbers
int multiply(int n1, int n2)
{
  int result;
  result = n1 * n2;
  return result;
}

// function to divide two integer numbers
int divide(int n1, int n2)
{
  int result;
  result = n1 / n2;
  return result;
}
