#include <iostream>
using namespace std;
int main() {
 int arr[]={9,8,6,5,4,2};
       int n =sizeof(arr)/sizeof(arr[0]);
       int mx = INT_MIN;
       for(int i=0; i<n; i++){
        if(mx<arr[i])
        mx = arr[i];
       } cout <<mx;
    }