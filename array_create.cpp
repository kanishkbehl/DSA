#include<iostream>
using namespace std;

void create(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"ENTER THE ELEMENT "<<i+1<<endl;
        cin>>arr[i];   
    }
}


int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS: ";
    cin>>n;
    int arr[n];
    create(arr,n);

    return 0;
}