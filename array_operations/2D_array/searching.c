#include <stdio.h>
int main() {
printf("Mithlesh Paswan 240010130087\n");
int arr[2][3] = { {3, 6, 9}, {12, 15, 18} };
int n, i, j;
printf("Enter number to search: ");
scanf("%d", &n);
for(i = 0; i < 2; i++) {
for(j = 0; j < 3; j++) {
if(arr[i][j] == n) {
printf("Found at position [%d][%d]", i, j);
return 0; // stop after finding
}
}
}
printf("Not found");
return 0;
} 