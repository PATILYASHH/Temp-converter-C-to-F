// Day 6 of 75 Days

#include<stdio.h>
int main()
{
  float C;
    printf("Enter Tempreture in Celsius :");
    scanf("%f",&C);

// Formula - F = 9/5 * C + 32

float multi  = 9*C;
  float divi = multi/5;

  float F = divi + 32;



  
    printf("\n %f Celsius = %f Fahrenheit\n",C,F);

  
  return 0;
}