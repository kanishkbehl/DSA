#include<iostream>
using namespace std;

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[],int n){

    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout<<endl;
}

int main(){
    int arr[6]={-1,2,23,43,10,2};
    int brr[5]={2,23,43,10,2};

    reverseArray(arr, 6);
    reverseArray(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}