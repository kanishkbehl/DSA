#include <iostream>
using namespace std;
int b[100];
int n;
int i = 0;

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
    cout << "sorted array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i]<<endl;
    }
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
}
