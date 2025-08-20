#include <iostream>
using namespace std;
int main()
{
    int arr[] ={1,2,3,4,5,6,7,8,9};
    int n =sizeof(arr)/sizeof(arr[0]);
    int x;
    cout <<"enter the targated element:";
    cin  >>x;
     
    bool flag =false; //means not present
    for(int i=0; i <n; i++){
        if(arr[i]==x){
            flag =true;  // means present
            break;
        }
    }
    if(flag ==true) {
        cout <<x <<"is present";
    }else 
    cout <<x <<"is not present" ;
}