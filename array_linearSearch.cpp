#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
         
         if(arr[i]==key){
            return 1;
         }
    }
    return 0;
}



int main(){
    int arr[10]={5,7,9,12,15,16,-2,31,-33,1};
    
    int key;
    cout<<"ENTER THE ELEMENT TO SEARCH FOR: "<<endl; 
    cin>>key;

    bool found = search(arr,10,key);
    if (found){
        cout<<"ELEMENT IS PRESENT"<<endl;

    }
    else{
        cout<<"ELEMENT NOT FOUND"<<endl;
    }



    return 0;
}   