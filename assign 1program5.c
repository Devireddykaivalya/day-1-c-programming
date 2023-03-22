#include <stdio.h>
int main() {
   int matrix[3][3];
   int i, j, rows, cols;
   printf("Enter the number of rows and columns of the matrix: ");
   scanf("%d %d", &rows, &cols);
   printf("Enter the elements of the matrix:\n");
   for(i = 0; i < rows; i++) {
      for(j = 0; j < cols; j++) {
         scanf("%d", &matrix[i][j]);
      }
   }
   printf("The diagonal elements of the matrix are:\n");
   for(i = 0; i < rows; i++) 
   {
      for(j = 0; j < cols; j++)
	  {
         if(i == j)
		 {
            printf("%d ", matrix[i][j]);
         }
      }
   }
   return 0;
}
