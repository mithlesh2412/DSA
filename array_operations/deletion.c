#include <stdio.h>
int main(){
    printf("Mithlesh  Paswan\n");
    printf("240010130087\n");
    int arr[50],size,pos;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter the array elements:");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);

    }
    printf("enter the position you want to delete:");
    scanf("%d",&pos);
    if(pos<=0 || pos>size){
        printf("Invalid position");

    }
    else{
        for(int i=pos-1; i<size-1; i++){
            arr[i]=arr[i+1];
        }
        size--;
        printf("updated array");
        for(int i=0; i<size; i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;

}