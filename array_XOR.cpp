#include<iostream>
using namespace std;

int findUnique(int arr[], int size){

    int ans = 0;
    for (int i=0; i<size;i++){
        ans = ans^arr[i];
    }
    cout<<"THE UNIQUE NUMBER IS: "<<ans<<endl;
}   

int printArray(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[7]={1,2,3,4,3,2,1};
    cout<<"THE ARRAY IS: "<<endl;
    printArray(arr,7);
    findUnique(arr,7);
    return 0;
}