#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int n;
    int s=0;
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s=s+a[i][j];
            cout<<"  ";
        }
        cout<<"SUM OF ROW "<<i+1<<" "<<"IS:"<<" "<<s<<endl;
        cout<<" "<<endl;
        s=0;
    }


    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            s=s+a[i][j];
            cout<<"  ";
        }
        cout<<"SUM OF COLUMN "<<j+1<<" "<<"IS:"<<" "<<s<<endl;
        cout<<" "<<endl;
        s=0;
    }

    
       
    return 0;
}