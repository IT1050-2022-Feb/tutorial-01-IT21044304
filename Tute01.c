/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int m1, m2, Avg;

   printf("Enter Marks for subject 1 : ");
   scanf("%d", &m1);
   
   printf("Enter Marks for subject 2 : ");
   scanf("%d", &m2);

   Avg = (m1 + m2)/2;

   printf("Average marks of the two subjects is : %d ", Avg);
   
  return 0;
}

