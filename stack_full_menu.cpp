//ASSIGNMENT-2 QUES-1
#include<iostream>
using namespace std;

int stack[100], n=100, top=-1;
void isfull(){
    if (top>=n-1){
        cout<<"STACK IS FULL"<<endl;
    }
    else
    {
        cout<<"STACK IS NOT FULL"<<endl;
    }
}

void push(int val){
    top++;
    stack[top]=val;
}

void isempty(){
    if (top<=-1){
        cout<<"STACK IS EMPTY"<<endl;
    }
    else
    {
        cout<<"STACK IS NOT EMPTY"<<endl;
    }
}

void pop(){
    cout<<"THE POPPED ELEMENT IS: "<<stack[top]<<endl;
    top--;
}

void peek(){
    cout<<"THE TOP ELEMENT IS: "<<stack[top]<<endl;
}

void display(){
    if(top>=0){
        cout<<"STACK ELEMENTS ARE: ";
        for(int i=top; i>=0; i--){
            cout<<stack[i]<<" ";
            cout<<endl;
        }
    }
    else
    {
        cout<<"THE STACK IS EMPTY"<<endl;
    }
    
}

int main(){
    int ch, val;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"1) PUSH IN STACK"<<endl;
    cout<<"2) POP IN STACK"<<endl;
    cout<<"3) CHECK IF STACK IS FULL OR NOT?"<<endl;
    cout<<"4) CHECK IF STACK IS EMPTY OR NOT?"<<endl;
    cout<<"5) DISPLAY STACK"<<endl;
    cout<<"6) PEEK STACK"<<endl;
    cout<<"7) EXIT"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    
    do
    {
        cout<<"ENTER THE CHOICE: "<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"ENTER THE ELEMENT TO BE PUSHED"<<endl;
                cin>>val;
                push(val);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                isfull();
                break;
            }
            case 4:
            {
                isempty();
                break;
            }
            case 5:
            {
                display();
                break;
            }
            case 6:
            {
                peek();
                break;
            }
            case 7:
            {
                cout<<"EXIT"<<endl;
                break;
            }
            default:
            {
                cout<<"INVALID CHOICE"<<endl;
            }
        }
    }
    while(ch!=7);
    return 0;
}