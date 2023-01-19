#include<bits/stdc++.h>
using namespace std;

class Customer{
  string name;
  int phone_number;
  public:

  void readC()
  {
    cout<<endl;
    cout<<"enter customer name : ";
    cin.ignore();
    getline(cin,name);
    cout<<"enter custmor phone_number : ";
    cin>>phone_number;
  }

  void showC()
  {
        cout<<endl;
    cout<<"Customer name : "<<name<<endl;
    cout<<"Customer phone number : "<<phone_number<<endl;
  }
};

class Depositor : public Customer
{
   int accno;
   float balance;

   public:

   void readD()
  {
    cout<<"enter Account Number : ";
    cin>>accno;
    cout<<"enter balance : ";
    cin>>balance;
  }

  void showD()
  {
    cout<<"Account Number : "<<accno<<endl;
    cout<<"Customer phone number : "<<balance<<endl;
  }

};

class Borrower : public Depositor
{
    int loan_no;
    int loan_amt;
    public:

    void readB()
    {
        readC();
        readD();
        cout<<"enter loan no : ";
        cin>>loan_no;
        cout<<"enter loan amount : ";
        cin>>loan_amt;
    }

    void showB()
    {  
        showC();
        showD();
        cout<<"loan No : "<<loan_no<<endl;
        cout<<"loan amount : "<<loan_amt<<endl;
    }
};

int main()
{
    int n;
    cout<<"enter no of customer : ";
    cin>>n;
    Borrower b[n];
    int t=n;

    while(n--)
    {
        b[n].readB();
    }
    n=t;
      
      
    while(n--)
    {
        b[n].showB();
    }

    return 0;
}