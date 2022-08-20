#include<iostream>
using namespace std;
int n;
int i=0;
int b[100];
void create(int)
{
    int d = 0;
    for (i = 0; i < n; i++)
    {
        cout << "ENTER THE VALUE: " << endl;
        cin >> d;
        b[i] = d;
    }
    cout << "THE ARRAY IS: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
}

void del(int a)
{
    int c = 0;
    int d = 0;
    for (i = 0; i < n; i++)
    {
        if (b[i] == a)
        {
            c++;
            d = i;
            break;
        }
    }
    cout << "the index of item to be deleted is" << d << endl;

    if (c == 1)
    {
        for (i = d; i < n; i++)
        {
            b[i] = b[i + 1];
        }
        n--;
        cout << "the list after deletion is:" << endl;

        for (i = 0; i < n; i++)
        {
            cout << b[i] << endl;
        }
    }
    else
    {
        cout << "element not found in array" << endl;
    }
}
int main(){
    int a;  
    int g;
    int k;
    cout << "enter the no of elements" << endl;
    cin >> n;
    create(n);
    cout << "enter the element :" << endl;
    cin >> k;
    del(k);

    return 0;
}