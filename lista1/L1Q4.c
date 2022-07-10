#include <stdio.h>

// Set up a program that reads a 3x3 matrix of 
// integer values. And then show the sum of the 
// elements of each row, row by row. One value 
// per row should be presented.

int main ()
{
  int matriz[3][3], line, column;
  
  for(line = 0; line < 3; line++)
  {
    for(column = 0; column < 3; column++)
    {
      scanf("%d",&matriz[line][column]);
    }
  }
  
  for(line = 0; line < 3; line++)
  {
    int sum = 0;
    for(column = 0; column < 3; column++)
    {
      sum = matriz[line][column] + sum;
    }
    printf("%d",sum);
    printf("\n");
  }
  
}
