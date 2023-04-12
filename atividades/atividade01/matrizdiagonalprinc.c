#include <stdio.h>

int main() {
  int matrix[3][3] = { {1, 4, 2}, {3, 6, 8}, {7, 7, 7} };

  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
     if (i == j) printf("%d\n", matrix[i][j]);
    }
  }
  
  return 0;
}
