#include<iostream>
using namespace std;

int printArray(int arr[], int size){

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findDuplicate(int arr[], int size){

    int ans=0;
    for(int i=0; i<size; i++){
        ans= ans^arr[i];
    }

    for(int i=0; i<size; i++){
        ans= ans^i;
    }
    cout<<"THE DUPLICATE NUMBER IS: "<<ans<<endl;
}

int main(){
    int arr[5]={1,2,3,3,4};
    cout<<"THE ARRAY IS: ";
    printArray(arr,5);
    findDuplicate(arr,5);
    return 0;
}