#include<iostream>
using namespace std;

void swapAlternate(int arr[], int n){

    for (int  i=0;i<n;i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int main(){
    int odd[5]={1,2,3,4,5};
    int even[6]={1,2,3,4,5,6};

    swapAlternate(odd,5);
    swapAlternate(even,6);

    printArray(odd,5);
    printArray(even,6);
    
    return 0;
}