//Mithlesh Paswan
//240010130087
#include <stdio.h>
int main() {
 printf("Mithlesh Paswan 240010130087\n");
 int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
 int row, col, value;
 printf("Original 2D array:\n");
 for(int i = 0; i < 2; i++) {
 for(int j = 0; j < 3; j++) {
 printf("%d ", arr[i][j]);
 }
 printf("\n");
 }
 printf("\nEnter row and column to insert (0-based index): ");
 scanf("%d %d", &row, &col);
 printf("Enter new value: ");
 scanf("%d", &value);
 arr[row][col] = value;
 printf("\nArray after insertion:\n");
 for(int i = 0; i < 2; i++) {
 for(int j = 0; j < 3; j++) {
 printf("%d ", arr[i][j]);
 }
 printf("\n");
 }
 return 0;
}