#include <iostream>
using namespace std;
int main() {
    int arr[] ={1,2,3,4,5,6,7,8,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    int sum =1;
    for(int i =0; i <=n-1; i++){
        sum =sum*arr[i];
        

    }
    cout <<sum <<" " <<endl;
}