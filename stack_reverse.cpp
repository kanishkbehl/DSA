#include<iostream>
#include<string>
using namespace std;
int stack[100], n=100, top=-1;
char push(char val){
    if(top>=n-1)
    {
        cout<<"THE STACK IS FULL"<<endl;
    }
    else
    {
        top++;
        stack[top]=val;
    }
}

char pop(){
    if(top<=-1)
    {
        cout<<"THE STACK IS EMPTY"<<endl;
    }
    else
    {
        return stack[top--];
    }
}
int main(){
    string s;
    getline(cin,s);
    // cout<<s.length();
    for(int i=0; i<s.length(); i++)
    {
        push(s[i]);
    }
    for(int i=0; i<s.length(); i++)
    {
        s[i]=pop();
    }
    cout<<"THE REVERSING STRING IS: "<<s<<endl;
    return 0;
}