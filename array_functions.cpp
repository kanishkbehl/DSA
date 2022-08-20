#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    cout<<"PRINTING AN ARRAY"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"";
    }

    cout<<endl<<"PRINTING IS DONE"<<endl;
}

int main(){
    int c[15]={10};
    int n=15;
    printArray(c,15);
    return 0;

}
