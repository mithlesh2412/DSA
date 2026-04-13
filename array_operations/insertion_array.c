#include <stdio.h>
int main()
{

    printf("Mithlesh  Paswan\n");
    printf("240010130087\n");

    int arr[50];
    int size,pos,num;

    printf("Enter the size of the array: ");
    scanf("%d",&size);

    printf("Enter the array elements:\n");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the data you want to insert: ");
    scanf("%d",&num);

    printf("Enter the position: ");
    scanf("%d",&pos);

    if(pos < 1 || pos > size+1){
        printf("Invalid position\n");
    }
    else {
        // shift elements to the right
        for(int i=size-1; i>=pos-1; i--){
            arr[i+1] = arr[i];
        }

        // insert element
        arr[pos-1] = num;
        size++;

        printf("Array elements after insertion:\n");
        for(int i=0; i<size; i++){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
