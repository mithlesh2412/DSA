#include <stdio.h>
int binarysearch(int arr[], int n, int data){
        int low =0,high =(n-1);
     while(low<=high){
         int mid =(low+high)/2;
         if(data==arr[mid]){
             return mid;
         }
         else if(data<arr[mid]){
             high =(mid-1);
         }
         else{
             low =(mid+1);
         }
     } 
     return -1;
}
    
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n =sizeof(arr)/sizeof(arr[0]);
    int data =50;
    int result = binarysearch(arr, n, data);
    if(result!=-1){
        printf("data %d found at location %d\n",data,result);
        
    }else{
        printf("data %d is not found",data);
        
    }
}
       