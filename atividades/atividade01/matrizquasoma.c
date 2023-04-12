#include <stdio.h>

int main() {
  int matrix[3][3] = { {1, 4, 2}, {3, 6, 8}, {3, 7, 5} };
  int matrix2[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
  
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
     printf ("%2d ", matrix[i][j]+matrix2[i][j]);
    
    }
   printf ("\n");
  }
  return 0;
}
