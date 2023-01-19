#include<bits/stdc++.h>
using namespace std;

class B;
class A
{
    int a;
    friend  void swap(A &,B &);
    public:
    
    A(int a)
    {
        this->a=a;
    }

    int getA()
    {
        return a;
    }
};

class B
{
    int b;
    friend void swap(A &,B &);

    public:
    
     B(int b)
    {
        this->b=b;
    }

   int getB()
   {
    return b;
   }

};

void swap(A &a1,B &b1)
{
      int temp=a1.a;
      a1.a=b1.b;
      b1.b=temp;

}

int main()
{
    A a1(15);
    B b1(10);

    swap(a1,b1);

    cout<<a1.getA()<<" "<<b1.getB()<<endl;

    return 0;
}