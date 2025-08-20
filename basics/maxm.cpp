#include <iostream>
using namespace std;
int main()

/*{
    int arr[] ={1,2,3,4,5,6,7,8,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    int mx =arr[0];
    for(int i =1; i <n; i++)
    {
        if(mx<arr[i])
        mx =arr[i];

    }cout <<mx << endl; 

} 




{
    int arr[] ={1,2,3,4,5,6,7,8,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    int mx =arr[0];
    for(int i =1; i <n; i++)
    {
        if(mx<arr[i])
        mx =max(mx,arr[i]);

    }cout <<mx << endl; 
}
 */

 {

 
 int arr[] ={1,2,3,4,5,6,7,8,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    int mx =INT_MIN;
    for(int i =1; i <n; i++){
        if(mx<arr[i])
        mx =max(mx,arr[i]);
    }
    cout <<mx <<endl;
 }
 