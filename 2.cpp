#include<bits/stdc++.h>

using namespace std;

class base
{
    int a;
    int b;

    protected:
    int c;

    public:

    void input()
    {
        cout<<"enter two number : ";
        cin>>a>>b;
        c=a+b;
    }
};

class derived : public base
{
    public:
    void print()
    {
        cout<<"sum is : "<<c;
    }
};

int main()
{
    derived d;
    d.input();
    d.print();
    return 0;
}

