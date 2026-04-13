#include <stdio.h>
int main() {
    
 int arr[5] = {10, 20, 30, 40, 50};
 int n, i;
 printf("Mithlesh Paswan 240010130087\n");
 printf("Enter number to search: ");
 scanf("%d", &n);
 for(i = 0; i < 5; i++) {
 if(arr[i] == n) {
 printf("Found at position %d", i);
 return 0; // stop program after finding
 }
 }
 printf("Not found");
 return 0;
}