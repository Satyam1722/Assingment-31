#include<bits/stdc++.h>

using namespace std;

class A
{
    protected:
    int a;
    int b;
    int c;


    public:

    void input()
    {
        cout<<"enter marks of three subject : ";
        cin>>a>>b>>c;
    }
};

class B : public A
{
    protected:
    int s;

    public:
    void sum()
    {
        s=a+b+c;
        
    }
};

class C : public B
{
    public:
    float percentage()
    {
        return s/(float)3;
    }
};

int main()
{
    C obj;
    obj.input();
    obj.sum();
    cout<<"percentage is : "<<obj.percentage()<<endl;
    return 0;
}

