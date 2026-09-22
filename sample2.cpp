#include<iostream>
using namespace std;
class Stack
{
    int top=-1;
    int a[5];
    int n;
    public:
    void getdata()
    {
        cout<<"Enter the number of elements (max 5): ";
        cin>>n;
        cout<<"Enter the elements: ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
    }
    void push(int x)
    {
        if(top<5)
        {
            a[top]=x;
            top++;
            cout<<"pushed element is:"<<x<<endl;
        }
        
        else
        {
            cout<<"Stack is full"<<endl;
        }
    }
    void display()
    {
        cout<<"Elements of the stack are: ";
        for(int i=0;i<=top;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Stack s;
    s.getdata();
    s.push(10);
    s.display();
    return 0;s
}
