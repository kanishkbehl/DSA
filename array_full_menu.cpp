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
void search(int a)
{

    int c = 0;
    for (i = 0; i < n; i++)
    {
        if (b[i] == a)
        {
            c++;
            break;
        }
    }
    if (c == 1)
    {
        cout << "element found" << endl;
    }
    else
    {
        cout << "not found" << endl;
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
void insert(int g, int r)
{

    if (r < n)
    {
        for (i = n; i > r; i--)
        {
            b[i] = b[i - 1];
        }
        b[r] = g;
        n++;
        cout << "the array is:" << endl;

        for (i = 0; i < n; i++)
        {
            cout << b[i] << endl;
        }
    }
    else
    {
        for (i = n; i > r; i--)
        {
            b[i] = b[i - 1];
        }
        b[r] = g;
        n++;
        cout << "the array is:" << endl;

        for (i = 0; i < n; i++)
        {
            cout << b[i] << endl;
        }
    }
    cout << "value of n is: " << n << endl;
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
void size()
{
    cout << "the size of the array is:" << n << endl;
}
int main() 
{
    int a;
    int i;  
    int g;
    cout << "enter the no of elements" << endl;
    cin >> n;
    create(n);
    while(g>1){
    cout << "which function you want to perform:" << endl
         << "1.search" << endl
         << "2.sort" << endl
         << "3.insert" << endl
         << "4.delete" << endl
         << "5.size of array" << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        int a;
        cout << "enter the element to be found:" << endl;
        cin >> a;
        search(a);
        break;
    case 2:
        sort(b);
        break;
    case 3:
        int s, v, t;
        cout << "enter the element :" << endl;
        cin >> s;
        cout << "press 1 if you want to add at continous index" << endl;
        cin >> v;
        if (v == 1)
        {
            t = n;
        }
        else
        {
            cout << "enter the index for  :" << endl;
            cin >> t;
        }
        insert(s, t);
        break;
    case 4:
        int k;
        cout << "enter the element :" << endl;
        cin >> k;
        del(k);
        break;
    case 5:
        size();
        break;
    default:
        cout << "out of range" << endl;
        break;
    }
    
    cout<<"do you want to perform any other action? press 1 to do so"<<endl;
    cin>>i;
    if(i==1){
        g++;
    }
    else{
        g=0;
    }
    }

    return 0;
}