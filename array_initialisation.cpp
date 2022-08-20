#include<iostream>
using namespace std;
int main(){
    int a[15];    //declare
    cout<<"VALUE AT INDEX 2 IS: "<<a[1]<<endl;
    cout<<"VALUE AT INDEX 20 IS: "<<a[19]<<endl;

    int b[3]={20,30,40};
    cout<<"VALUE AT INDEX 2 IS: "<<b[2]<<endl;

    int b[15]={20,7};
    int n=20;
    cout<<"PRINTING THE ARRAY"<<endl;      //printing the array
    for(int i=0;i<n;i++){
        cout<<b[i]<<"";

    }
    cout<<"VALUE AT INDEX 2 IS: "<<b[2]<<endl;

    return 0;

}