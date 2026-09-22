#include<iostream>
using namespace std;
class Freq
{
    int n;
    int a[5];

    public:
    void display();
    void calculate();
    void input();
    void push(int x);
};
void Freq::push(int x)
{
    if(n<5)
    {
        a[n]=x;
        n++;
    }
    else
    {
        cout<<"Array is full"<<endl;
    }
}
void Freq::input()
{
    cout << "Enter the number of elements (max 5): ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void Freq::display()
{
    cout << "Elements of the array are: ";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    Freq f;
    f.input();
    f.display();
    f.push(10); // Example of pushing a new element
    return 0;
}