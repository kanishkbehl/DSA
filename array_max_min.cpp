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
        cout << "enter the value:" << endl;
        cin >> d;
        b[i] = d;
    }
    cout << "the array is:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
}
void sort(int b[])
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    cout<<"THE MAXIMUM NUMBER IS: "<<b[n-1]<<endl;
    cout<<"THE MINIMUM NUMBER IS: "<<b[0]<<endl;
}
int main() 
{
    int a;
    int i;  
    int g;
    cout << "enter the no of elements" << endl;
    cin >> n;
    create(n);
    sort(b);
    return 0;
}