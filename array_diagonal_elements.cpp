#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            
        }
        cout<<" "<<endl;
    }
    cout<<"THE MATRIX IS: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
            cout<<"  ";
        }
        cout<<" "<<endl;
    }
    cout<<"THE DIAGONAL ELEMENTS OF THE ARRAYS IS: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                
                cout<<a[i][j];
            }
            
        }
        cout<<" "<<endl;
    }
    cout<<"THE LOWER DIAGONAL ELEMENTS OF THE ARRAYS IS: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                
                cout<<a[i][j]<<" ";
            }
            
        }
        cout<<" "<<endl;
    }
    cout<<"THE UPPER DIAGONAL ELEMENTS OF THE ARRAYS IS: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                
                cout<<a[i][j]<<" ";
            }
            
        }
        cout<<" "<<endl;
    }

    
    return 0;
}