//Mithlesh Paswan
//240010130087
#include <stdio.h>
int main() {
printf("Mithlesh Paswan 240010130087\n");
int arr[2][3] = { {4, 8, 12}, {16, 20, 24} };
int row, col;
printf("Original 2D array:\n");
for(int i = 0; i < 2; i++) {
for(int j = 0; j < 3; j++) {
printf("%d ", arr[i][j]); }
printf("\n");
}
printf("\nEnter row and column to delete (0-based index): ");
scanf("%d %d", &row, &col);
arr[row][col] = 0;
printf("\nArray after deletion:\n");
for(int i = 0; i < 2; i++) {
for(int j = 0; j < 3; j++) {
printf("%d ", arr[i][j]);
}
printf("\n");
}
return 0;
} 