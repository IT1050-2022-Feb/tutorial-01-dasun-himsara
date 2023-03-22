/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  //declaring variables
  int marks1,marks2;
  float avg;

  //getting user inputs
  printf("enter 1st mark :");
  scanf("%d",&marks1);

   printf("enter 2nd mark :");
  scanf("%d",&marks2);

  avg = (marks1 + marks2)/2;

  printf("average of two marks : %.2f",avg);
  
  return 0;
}

